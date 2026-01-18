#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H
#include<string>
using namespace std;
class ParkingSlot {
public:
    string slotID;          
    int zoneID;          
    bool isOccupied;    

    ParkingSlot(int sID, int zID); 

    ParkingSlot();

    bool isAvailable();
    void occupySlot();
    void freeSlot();
};
#endif