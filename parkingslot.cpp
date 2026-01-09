#include "parkingslot.h"

ParkingSlot::ParkingSlot(int sID, int zID) {
{
    slotID=sID;
    zoneID=zID;
    isAvailable=true; //slots available
}