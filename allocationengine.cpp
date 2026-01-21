#include "AllocationEngine.h"

bool AllocationEngine::allocateSlot(ParkingRequest& request, Zone cityZones[], int numZones) {
    for (int i = 0; i < numZones; i++) {
        if (cityZones[i].zoneID == request.requestedZoneID) {
            ParkingSlot* spot = cityZones[i].findSlotInZone();
            if (spot != nullptr) {
                spot->occupySlot();
                request.assignedSlotID = spot->slotID;
                request.updateState(ALLOCATED);
                return true; 
            }
        }
    }

    for (int i = 0; i < numZones; i++) {
        ParkingSlot* spot = cityZones[i].findSlotInZone();
        if (spot != nullptr) {
            spot->occupySlot();
            request.assignedSlotID = spot->slotID;
            request.updateState(ALLOCATED);
            return true;
        }
    }

    return false;
}