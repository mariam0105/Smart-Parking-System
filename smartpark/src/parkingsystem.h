#ifndef PARKINGSYSTEM_H
#define PARKINGSYSTEM_H

#include <string>
#include <vector>

struct Vehicle {
    std::string plate;
    std::string name;
    std::string cnic;
    int zone;
    std::string slot;
};

class ParkingSystem {
private:
    double revenue;
    std::vector<Vehicle> registry;

public:
    ParkingSystem() : revenue(0.0) {}
    bool parkVehicle(std::string p, std::string n, std::string c, int z);
    void undoLast();
    double getRev() { return revenue; }
    std::vector<Vehicle>& getList() { return registry; }
};

#endif