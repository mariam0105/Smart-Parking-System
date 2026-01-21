#include "ParkingHistory.h"
#include <iostream>

ParkingHistory::ParkingHistory() { head = nullptr; }

void ParkingHistory::addLog(ParkingRequest req) {
    Node* newNode = new Node;
    newNode->data = req;
    newNode->next = head;
    head = newNode;
}

void ParkingHistory::showStats() {
    int total = 0, cancels = 0;
    Node* temp = head;
    while(temp != nullptr) {
        total++;
        if(temp->data.currentState == CANCELLED) cancels++;
        temp = temp->next;
    }
    std::cout << "Total Requests: " << total << " | Cancelled: " << cancels << std::endl;
}