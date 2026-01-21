#include "zone.h"

Zone::Zone(int id){
    this->zoneID=id;

    for(int i=0;i<max_areas;i++){
        areas[i]=ParkingArea("Area" + to_string(i+1), id);
    }
}
Zone::Zone(){
    this->zoneID=-1;

    ParkingSlots* Zone::findSlotInZone(){

    
    for(int i=0;i<max_areas;i++){
        ParkingSlot* found= areas[i].findAvailableSlot();
        if(found!=nullptr){
            return found;
        }
    }
    return nullptr;
}