#include "ParkingRequest.h"

ParkingRequest::ParkingRequest(std::string vID, int zID) {
    this->vehicleID = vID;
    this->requestedZoneID = zID;
    this->assignedSlotID = "NONE";
    this->currentState = REQUESTED; 
}

ParkingRequest::ParkingRequest() {
    this->currentState = CANCELLED;
}

bool ParkingRequest::updateState(RequestState newState) {
    if (this->currentState == CANCELLED || this->currentState == RELEASED) {
        return false;
    }

    if (this->currentState == REQUESTED && (newState == ALLOCATED || newState == CANCELLED)) {
        this->currentState = newState;
        return true;
    }

    if (this->currentState == ALLOCATED && (newState == OCCUPIED || newState == CANCELLED)) {
        this->currentState = newState;
        return true;
    }

    return false;
}