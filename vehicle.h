#ifndef vehicle_H
#define vehicle_H
#include <string>
using namespace std;
class vehicle{
    public:
    string vehicleID;
    int preferredZoneID;

    vehicle(string vID, int pzID);

    vehicle();
};
#endif