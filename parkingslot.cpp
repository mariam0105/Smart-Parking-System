#include "parkingslot.h"


ParkingSlot::ParkingSlot(int sID, int zID) 
{
    this->slotID=sID;
    this->zoneID=zID;
    this->isOccupied=false; //slots available
}

ParkingSlot::ParkingSlot(){
    this->slotID="";
    this->zoneID=-1;
    this->isOccupied=false;
   
}
//checking if slot is free
bool ParkingSlot::isAvailable(){
    return !isOccupied;
}
//park a car here
void ParkingSlot::occupySlot(){
   this->isOccupied=true;
}
//remove a car from here
void ParkingSlot::freeSlot(){
    this->isOccupied=false;
}