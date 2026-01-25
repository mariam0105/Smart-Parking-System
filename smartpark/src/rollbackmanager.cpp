#include "rollbackmanager.h"

void RollbackManager::pushAction(ParkingRequest* req) {
    StackNode* newNode = new StackNode{req, top};
    top = newNode;
}

ParkingRequest* RollbackManager::popAction() {
    if (!top) return nullptr;
    ParkingRequest* req = top->data;
    StackNode* temp = top;
    top = top->next;
    delete temp;
    return req;
}