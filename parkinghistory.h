#ifndef PARKINGHISTORY_H
#define PARKINGHISTORY_H
#include "ParkingRequest.h"

struct Node {
    ParkingRequest data;
    Node* next;
};

class ParkingHistory {
private:
    Node* head;
public:
    ParkingHistory();
    void addLog(ParkingRequest req);
    void showStats();
};
#endif