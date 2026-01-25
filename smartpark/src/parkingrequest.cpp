#include "parkingrequest.h"

ParkingRequest::ParkingRequest(std::string vID, std::string name, std::string userCnic, int pZone, bool vip) {
    vehicleID = vID;
    ownerName = name;
    cnic = userCnic;
    preferredZone = pZone;
    isVIP = vip;
    fee = vip ? 0.0 : 50.0;
    assignedSlotID = "NONE";
    state = ALLOCATED;
}