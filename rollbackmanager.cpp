#include "RollbackManager.h"
#include <iostream>

RollbackManager::RollbackManager() {
    top = -1;
}

void RollbackManager::saveAction(ParkingRequest* r, ParkingSlot* s) {
    if (top < MAX - 1) {
        top++;
        stack[top].req = r;
        stack[top].slot = s;
    }
}

void RollbackManager::undo(int k) {
    for (int i = 0; i < k && top >= 0; i++) {
        stack[top].slot->freeSlot();
        stack[top].req->updateState(CANCELLED);
        std::cout << "Undone: " << stack[top].req->vehicleID << std::endl;
        top--;
    }
}