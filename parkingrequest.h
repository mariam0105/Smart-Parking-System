#ifndef PARKINGREQUEST_H
#define PARKINGREQUEST_H
#include <string>
enum RequestState { REQUESTED, ALLOCATED, OCCUPIED, RELEASED, CANCELLED };

class ParkingRequest {
public:
    std::string vehicleID;
    int requestedZoneID;
    std::string assignedSlotID;
    RequestState currentState;

    ParkingRequest(std::string vID, int zID);
    ParkingRequest();
    bool updateState(RequestState newState);
};
#endif
