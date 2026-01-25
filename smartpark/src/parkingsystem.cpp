#include "parkingsystem.h"

bool ParkingSystem::parkVehicle(std::string p, std::string n, std::string c, int z) {
    if (p.empty() || z < 1 || z > 5) return false;

    // Duplicate Check
    for (const auto& v : registry) {
        if (v.plate == p) return false;
    }

    // Generate Slot ID
    char zoneLetter = 'A' + (z - 1);
    std::string slotId = "";
    slotId += zoneLetter;
    slotId += "-" + std::to_string(100 + registry.size() + 1);

    Vehicle v = {p, n, c, z, slotId};
    registry.push_back(v);
    revenue += 500.0;
    return true;
}

void ParkingSystem::undoLast() {
    if (!registry.empty()) {
        registry.pop_back();
        if (revenue >= 500) revenue -= 500;
    }
}