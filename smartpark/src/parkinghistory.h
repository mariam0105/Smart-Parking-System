#ifndef PARKINGHISTORY_H
#define PARKINGHISTORY_H
#include "parkingrequest.h"

struct HistoryNode {
    ParkingRequest data;
    HistoryNode* next;
};

class ParkingHistory {
private:
    HistoryNode* head;
public:
    ParkingHistory() { head = nullptr; }
    void addEntry(ParkingRequest req);
    void printLogs();
    double getTotalRevenue();
};
#endif