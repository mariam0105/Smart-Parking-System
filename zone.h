#ifndef ZONE_H  
#define ZONE_H
#include <string>
using namespace std;

class Zone {
    public:
    int zoneID;
    static const int max_areas=100;
    ParkingArea areas[max_areas];

    Zone(int id);
    Zone();
};
#endif