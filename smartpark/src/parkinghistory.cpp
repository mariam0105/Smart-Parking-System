#include "parkinghistory.h"
#include <iostream>
#include <iomanip>

void ParkingHistory::addEntry(ParkingRequest req) {
    HistoryNode* newNode = new HistoryNode{req, head};
    head = newNode;
}

double ParkingHistory::getTotalRevenue() {
    double total = 0;
    HistoryNode* temp = head;
    while (temp) {
        if (temp->data.state == ALLOCATED) total += temp->data.fee;
        temp = temp->next;
    }
    return total;
}

void ParkingHistory::printLogs() {
    HistoryNode* temp = head;
    std::cout << "\nPLATE          OWNER          TYPE      FEE       SLOT\n";
    while (temp) {
        std::cout << std::left << std::setw(15) << temp->data.vehicleID 
                  << std::setw(15) << temp->data.ownerName 
                  << std::setw(10) << (temp->data.isVIP ? "VIP" : "REG") 
                  << std::setw(10) << temp->data.fee 
                  << temp->data.assignedSlotID << "\n";
        temp = temp->next;
    }
}