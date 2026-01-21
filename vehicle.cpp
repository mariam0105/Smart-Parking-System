#include "vehicle.h"
#include <string>
using namespace std;

Vehicle::Vehicle(std::string id, int zoneID) {
    this->vehicleID = id;
    this->preferredZoneID = zoneID;
}
Vehicle::Vehicle() {
    this->vehicleID = "";
    this->preferredZoneID = -1;
}