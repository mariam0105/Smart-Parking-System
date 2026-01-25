#include "allocationengine.h"

bool AllocationEngine::allocateSlot(ParkingRequest& req, Zone city[]) {
    // Check the preferred zone first (0-indexed)
    int zIdx = req.preferredZone - 1;
    
    ParkingSlot* slot = city[zIdx].findSlotInZone();
    
    if (slot) {
        slot->occupySlot();
        req.assignedSlotID = slot->slotID;
        return true;
    }
    return false;
}

void AllocationEngine::freeSlot(std::string slotID, Zone city[]) {
    // Logic to find slotID in city and call .freeSlot()
    for(int z=0; z<3; z++) {
        for(int a=0; a<5; a++) {
            for(int s=0; s<10; s++) {
                if(city[z].areas[a].slots[s].slotID == slotID) {
                    city[z].areas[a].slots[s].freeSlot();
                    return;
                }
            }
        }
    }
}