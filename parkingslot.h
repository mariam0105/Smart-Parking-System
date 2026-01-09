#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H

class ParkingSlot {
public:
    int slotID;          
    int zoneID;          
    bool isAvailable;    

    ParkingSlot(int sID, int zID); 
};

#endif