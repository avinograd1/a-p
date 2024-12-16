#include "main.h"

using namespace std;

int main() {
    int n;
    char nationality[STR_LEN],
        position[STR_LEN],
        rank[STR_LEN];

    cout << "Введите кол-во военнослужащих: ";
    cin >> n;
    SoldierPerson* arrayStruct = new SoldierPerson[n];

    initArray(arrayStruct, n);

    cout << endl << "Список: " << endl;
    displayArray(arrayStruct, n);

    cout << endl << "Введите национальность: " << endl;
    cin.getline(nationality, STR_LEN);

    cout << endl << "Введите должность: " << endl;
    cin.getline(position, STR_LEN);

    cout << endl << "Введите звание: " << endl;
    cin.getline(rank, STR_LEN);

    cout << endl;

    displayChoice(arrayStruct, n, nationality, position, rank);

    cout << endl;
    delete []arrayStruct; 
}