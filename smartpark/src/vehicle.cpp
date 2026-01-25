#include "vehicle.h"

Vehicle::Vehicle(std::string id, std::string name, std::string userCnic, int zoneID) {
    this->vehicleID = id;
    this->ownerName = name;
    this->cnic = userCnic;
    this->preferredZoneID = zoneID;
}

Vehicle::Vehicle() {
    this->vehicleID = "";
    this->ownerName = "Unknown";
    this->cnic = "00000-0000000-0";
    this->preferredZoneID = -1;
}