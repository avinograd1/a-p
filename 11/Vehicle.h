#pragma once
#include <iostream>
#include <cstring>


using namespace std;
const int STR_LEN = 256;

class Vehicle {
private:
    char vehicleType[STR_LEN];
    char manufacturer[STR_LEN];
    int manufactureYear;
    char lastInspectionDate[STR_LEN];
    char engineType[STR_LEN];
    char purpose[STR_LEN];
    char offroadCapability[STR_LEN];
    char climateAdaptability[STR_LEN];
    char usagePattern[STR_LEN];

public:
    char* getVehicleType();
    char* getManufacturer();
    int getManufactureYear();
    char* getLastInspectionDate();
    char* getEngineType();
    char* getPurpose();
    char* getOffroadCapability();
    char* getClimateAdaptability();
    char* getUsagePattern();

    void setVehicleType(char* vehicleType);
    void setManufacturer(char* manufacturer);
    void setManufactureYear(int year);
    void setLastInspectionDate(char* date);
    void setEngineType(char* engineType);
    void setPurpose(char* purpose);
    void setOffroadCapability(char* offroadCapability);
    void setClimateAdaptability(char* climateAdaptability);
    void setUsagePattern(char* usagePattern);
};


void initArray(Vehicle*, int);
void displayArray(Vehicle*, int);
void displayChoice(Vehicle*, int, char*, int, int);