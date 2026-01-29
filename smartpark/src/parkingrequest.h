#ifndef PARKINGREQUEST_H
#define PARKINGREQUEST_H
#include <string>

enum RequestState { 
    ALLOCATED, CANCELLED
 };

class ParkingRequest {
public:
    std::string vehicleID, ownerName, cnic, assignedSlotID;
    int preferredZone;
    bool isVIP;
    double fee;
    RequestState state;
    ParkingRequest(std::string vID, std::string name, std::string userCnic, int pZone, bool vip);
};
#endif