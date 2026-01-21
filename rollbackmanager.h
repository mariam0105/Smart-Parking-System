#ifndef ROLLBACKMANAGER_H
#define ROLLBACKMANAGER_H
#include "ParkingRequest.h"
#include "ParkingSlot.h"

struct HistoryItem {
    ParkingRequest* req;
    ParkingSlot* slot;
};

class RollbackManager {
private:
    static const int MAX = 50;
    HistoryItem stack[MAX];
    int top;

public:
    RollbackManager();
    void saveAction(ParkingRequest* r, ParkingSlot* s);
    void undo(int k);
};
#endif