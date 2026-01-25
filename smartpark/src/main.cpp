#include "crow_all.h"
#include "parkingsystem.h"

using namespace std;

int main() {
    crow::SimpleApp app;
    ParkingSystem ps;
    crow::mustache::set_base("templates");

    CROW_ROUTE(app, "/")([](){
        return crow::mustache::load("index.html").render();
    });

    CROW_ROUTE(app, "/park").methods("POST"_method)([&ps](const crow::request& req){
        auto x = crow::json::load(req.body);
        if (!x) return crow::response(400);

        bool success = ps.parkVehicle(x["p"].s(), x["n"].s(), x["c"].s(), x["z"].i());
        return success ? crow::response(200) : crow::response(400);
    });

    CROW_ROUTE(app, "/status")([&ps](){
        crow::json::wvalue res;
        res["revenue"] = ps.getRev();
        res["count"] = (int)ps.getList().size(); // This fixes the "undefined" error

        auto& list = ps.getList();
        for (int i = 0; i < list.size(); i++) {
            res["cars"][i]["plate"] = list[i].plate;
            res["cars"][i]["name"] = list[i].name;
            res["cars"][i]["cnic"] = list[i].cnic;
            res["cars"][i]["slot"] = list[i].slot;
            res["cars"][i]["zone"] = list[i].zone;
        }
        
        if(list.empty()) res["cars"] = crow::json::wvalue::list();
        return res;
    });

    CROW_ROUTE(app, "/undo").methods("POST"_method)([&ps](){
        ps.undoLast();
        return crow::response(200);
    });

    app.port(8080).run();
}