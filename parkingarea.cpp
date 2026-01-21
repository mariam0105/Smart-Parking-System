#include "ParkingArea.h"

ParkingArea::ParkingArea(string name, int zoneID)
{
    this->areaName = name;
    this->occupiedCount = 0;

    for (int i = 0; i < MAX_SLOTS; i++)
    {
        new (&slots[i]) ParkingSlot();
        slots[i].slotName = name + "_" + to_string(i + 1);
    }
}

ParkingArea::ParkingArea()
{
    this->areaName = "Unknown";
    this->occupiedCount = 0;
}

ParkingSlot *ParkingArea::findAvailableSlot()
{
    for (int i = 0; i < MAX_SLOTS; i++)
    {
        if (slots[i].isAvailable)
        {
            return &slots[i];
        }
    }
    return nullptr;
}