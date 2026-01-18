#include "vehicle.h"

vehicle::vehicle(string vID, int pzID){
    this->vehicleID=vID;
    preferredZoneID=pzID;
}

vehicle::vehicle(){
this->vehicleID="";
this->preferredZoneID=-1;
}