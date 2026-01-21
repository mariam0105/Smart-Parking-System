#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H
#include <string>
using namespace std;
class ParkingSlot {
public:
    int slotID;     
    string slotName;     
    int zoneID;          
    bool isAvailable;    

    ParkingSlot(int sID, int zID); 
};

#endif