#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle {
public:
    std::string vehicleID;
    std::string ownerName; 
    std::string cnic;      
    int preferredZoneID;

    Vehicle(std::string id, std::string name, std::string userCnic, int zoneID);
    Vehicle();
};
#endif