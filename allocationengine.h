#ifndef ALLOCATIONENGINE_H
#define ALLOCATIONENGINE_H
#include "Zone.h"
#include "ParkingRequest.h"

class AllocationEngine {
public:
    static bool allocateSlot(ParkingRequest& request, Zone cityZones[], int numZones);
};
#endif