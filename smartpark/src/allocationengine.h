#ifndef ALLOCATIONENGINE_H
#define ALLOCATIONENGINE_H
#include "zone.h"
#include "parkingrequest.h"

class AllocationEngine {
public:
    static bool allocateSlot(ParkingRequest& req, Zone city[]);
    static void freeSlot(std::string sID, Zone city[]); 
};
#endif