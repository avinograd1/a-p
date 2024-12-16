#include "main.h"

using namespace std;

SoldierPerson initSoldierPerson() {
    SoldierPerson man;
    
    cout << "Имя: ";
    cin.getline(man.firstName, STR_LEN);

    cout << "Отчество: ";
    cin.getline(man.secondName, STR_LEN);
    
    cout << "Фамилия: ";
    cin.getline(man.lastName, STR_LEN);
    
    cout << "Домашний адрес(почтовый индекс): ";
    cin.getline(man.postCode, STR_LEN);

    cout << "Домашний адрес(страна): ";
    cin.getline(man.country, STR_LEN);

    cout << "Домашний адрес(область): ";
    cin.getline(man.region, STR_LEN);

    cout << "Домашний адрес(район): ";
    cin.getline(man.district, STR_LEN);

    cout << "Домашний адрес(город): ";
    cin.getline(man.city, STR_LEN);

    cout << "Домашний адрес(улица): ";
    cin.getline(man.street, STR_LEN);

    cout << "Домашний адрес(дом): ";
    cin >> man.houseNumber;
    
    cout << "Домашний адрес(квартира): ";
    cin >> man.flatNumber;

    
    cin.ignore(STR_LEN, '\n');
    cout << "Национальность: ";
    cin.getline(man.nationality, STR_LEN);

    cout << "День рождения: ";
    cin >> man.birthDay;

    cout << "Месяц рождения: ";
    cin >> man.birthMonth;

    cout << "Год рождения: ";
    cin >> man.birthYear;

    cin.ignore(STR_LEN, '\n');

    cout << "Должность: ";
    cin.getline(man.militaryPosition, STR_LEN);

    cout << "Звание: ";
    cin.getline(man.militaryRank, STR_LEN);

    return man;
}

void initArray(SoldierPerson* array, int n) {
    int i;
    cin.ignore(STR_LEN, '\n');
    for(i = 0; i < n; i++) {
        cout << "Введите информацию о " << i + 1
        << "-(ом/ем) солдате" << endl;
        array[i] = initSoldierPerson();
    }
}

void displayArray(SoldierPerson* array, int n) {
    for(int i = 0; i < n; i++){
        displaySoldierPerson(array[i]);
        if(i+1 < n)
            cout << endl << endl;
    }
    cout << endl;
}

void displayChoice(SoldierPerson* a, int n, char* nationality, char* position, char* rank){
    for(int i = 0; i < n; i++)
        if(!strcmp(a[i].nationality, nationality) &&
            !strcmp(a[i].militaryPosition, position) &&
           !strcmp(a[i].militaryRank, rank)) {
            displaySoldierPerson(a[i]);
        }
}

void displaySoldierPerson(SoldierPerson man) {
    cout << man.firstName << " "
        << man.secondName << " "
        << man.lastName << " " 

        << man.birthDay << "." 
        << man.birthMonth << "."
        << man.birthYear << " " 

        << man.nationality << " " << endl

        << man.postCode << ", "
        << man.country << ", "
        << man.region << ", "
        << man.district << ", "
        << man.city << ", "
        << man.street << ", "
        << man.houseNumber << ", "
        << man.flatNumber << endl

        << man.militaryPosition << " "
        << man.militaryRank;
}