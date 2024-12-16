#include <iostream>
#include <cstring>

const int STR_LEN = 256;

struct SoldierPerson {
    char firstName[STR_LEN],
        secondName[STR_LEN],
        lastName[STR_LEN],

        postCode[STR_LEN],
        country[STR_LEN],
        region[STR_LEN],
        district[STR_LEN],
        city[STR_LEN],
        street[STR_LEN];
    int houseNumber,
        flatNumber;

    char nationality[STR_LEN];
    
    int birthDay,
        birthMonth,
        birthYear;

    char militaryPosition[STR_LEN],
        militaryRank[STR_LEN];
};

void initArray(SoldierPerson *, int);
void displayArray(SoldierPerson *, int);
void displayChoice(SoldierPerson *, int, char*, char*, char*);
void displaySoldierPerson(SoldierPerson);
