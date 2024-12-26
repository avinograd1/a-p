#include "Vehicle.h"

char* Vehicle::getVehicleType() {
    return vehicleType;
}

char* Vehicle::getManufacturer() {
    return manufacturer;
}

int Vehicle::getManufactureYear() {
    return manufactureYear;
}

char* Vehicle::getLastInspectionDate() {
    return lastInspectionDate;
}

char* Vehicle::getEngineType() {
    return engineType;
}

char* Vehicle::getPurpose() {
    return purpose;
}

char* Vehicle::getOffroadCapability() {
    return offroadCapability;
}

char* Vehicle::getClimateAdaptability() {
    return climateAdaptability;
}

char* Vehicle::getUsagePattern() {
    return usagePattern;
}

// Сеттеры
void Vehicle::setVehicleType(char* vehicleType) {
    strcpy(this->vehicleType, vehicleType);
}

void Vehicle::setManufacturer(char* manufacturer) {
    strcpy(this->manufacturer, manufacturer);
}

void Vehicle::setManufactureYear(int year) {
    this->manufactureYear = year;
}

void Vehicle::setLastInspectionDate(char* date) {
    strcpy(this->lastInspectionDate, date);
}

void Vehicle::setEngineType(char* engineType) {
    strcpy(this->engineType, engineType);
}

void Vehicle::setPurpose(char* purpose) {
    strcpy(this->purpose, purpose);
}

void Vehicle::setOffroadCapability(char* offroadCapability) {
    strcpy(this->offroadCapability, offroadCapability);
}

void Vehicle::setClimateAdaptability(char* climateAdaptability) {
    strcpy(this->climateAdaptability, climateAdaptability);
}

void Vehicle::setUsagePattern(char* usagePattern) {
    strcpy(this->usagePattern, usagePattern);
}



istream& operator>>(istream& stream, Vehicle& obj) {
    char str[STR_LEN];

    cout << "Введите тип транспортного средства: ";
    cin.getline(str, STR_LEN);
    obj.setVehicleType(str);

    cout << "Введите фирму изготовителя: ";
    cin.getline(str, STR_LEN);
    obj.setManufacturer(str);

    int n;
    cout << "Введите год выпуска: ";
    cin >> n;
    obj.setManufactureYear(n);

    cout << "Введите дату последнего тех. осмотра: ";
    cin.ignore(STR_LEN, '\n');
    cin.getline(str, STR_LEN);
    obj.setLastInspectionDate(str);

    cout << "Введите тип двигателя: ";
    cin.getline(str, STR_LEN);
    obj.setEngineType(str);

    cout << "Введите назначение: ";
    cin.getline(str, STR_LEN);
    obj.setPurpose(str);

    cout << "Введите проходимость: ";
    cin.getline(str, STR_LEN);
    obj.setOffroadCapability(str);

    cout << "Введите приспособленность к климат. усл.: ";
    cin.getline(str, STR_LEN);
    obj.setClimateAdaptability(str);

    cout << "Введите характер использования: ";
    cin.getline(str, STR_LEN);
    obj.setUsagePattern(str);

    return stream;
}

ostream& operator<<(ostream& stream, Vehicle obj) {
    stream << obj.getVehicleType() << " "
        << obj.getManufacturer() << " "
        << obj.getManufactureYear() << " "
        << obj.getLastInspectionDate() << " "
        << obj.getEngineType() << " "
        << obj.getPurpose() << " "
        << obj.getOffroadCapability() << " "
        << obj.getClimateAdaptability() << " "
        << obj.getUsagePattern () << endl;
    return stream;
}

void initArray(Vehicle* array, int n) {
    cin.ignore(STR_LEN, '\n');
    for (int i = 0; i < n; i++) {
        cout << flush << "\nВведите "
            << i + 1 << "-ую запись\n";
        cin >> array[i];
    }
}

void displayArray(Vehicle* array, int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i];
    }
}

void displayChoice(Vehicle* array, int n, char* tag, int low, int upper) {
    for (int i = 0; i < n; i++) {
        if (!strcmp(array[i].getPurpose(), tag)
            && array[i].getManufactureYear() <= upper
            && array[i].getManufactureYear() >= low)
            cout << array[i];
    }
}
