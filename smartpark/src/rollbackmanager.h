#ifndef ROLLBACKMANAGER_H
#define ROLLBACKMANAGER_H
#include "parkingrequest.h"

struct StackNode {
    ParkingRequest* data;
    StackNode* next;
};

class RollbackManager {
private:
    StackNode* top;
public:
    RollbackManager() { top = nullptr; }
    void pushAction(ParkingRequest* req);
    ParkingRequest* popAction();
};
#endif