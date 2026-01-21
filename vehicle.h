#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle {
public:
    string vehicleID;
    int preferredZoneID;

    Vehicle(string id, int zoneID) ;
    Vehicle();   

};
#endif