#include "Vehicle.h"

using namespace std;

int main() {
    setlocale(0, "");
    int n;
    char purpose[STR_LEN];
    int lowYear, upperYear;

    cout << "Введите число записей: ";
    cin >> n;
    Vehicle* arrayStruct = new Vehicle[n];

    initArray(arrayStruct, n);

    cout << endl << "Список: " << endl;
    displayArray(arrayStruct, n);

    cout << endl << "Введите назначение: " << endl;
    cin.getline(purpose, STR_LEN);

    cout << endl << "Введите границы года выпуска: " << endl;
    cin >> lowYear >> upperYear;

    displayChoice(arrayStruct, n, purpose, lowYear, upperYear);

    cout << endl;
    delete[]arrayStruct;
}