#include <iostream>
#include "vehicle.h"
#include "engine.h"
#include "transmission.h"
#include "car.h"
#include "carconfigurator.h"
using namespace std;

void PrintCarConfiguration(const string ConfName, shared_ptr <Car> car)
{
    cout << "\n======== " << ConfName << " ========\n";
    cout << car->GetEngine()->DisplayEngine()<< endl;
    cout << "Коробка передач       : " << car->GetTransmission()->Method() << endl;
    cout << "Привід авто           : " << car->GetDriveTrain()->Method() << endl;
    cout << "Колеса                : " << car->GetWheels()->Method() << endl;
    cout << "Салон авто            : " << car->GetInterior()->Method() << endl;
    cout << "Тип кузова            : " << car->GetBody()->Method() << endl;
    cout << "Колір кузова          : " << car->GetColor()->Method() << endl;
    cout << "Ціна за готове авто   : " << car->GetPrice()->Method() << endl;
}
int main() 
{
    system("chcp 1251>nul");
    
    cout << "Доступні авто на фабриці: " << endl;

    shared_ptr <CarConfigurator> configurator = make_shared<CarConfigurator>();
    shared_ptr <Car> BMW_E61 = make_shared<Car>();

    configurator->SetCarFactory(make_shared<BMW_E61_525d>());
    configurator->Configure((BMW_E61));
    PrintCarConfiguration("BMW E61 Touring", BMW_E61);
	
    shared_ptr <Car> BMW_E60 = make_shared<Car>();

    configurator->SetCarFactory(make_shared <BMW_E60_523i>());
    configurator->Configure((BMW_E60));
    PrintCarConfiguration("BMW E60 Sedan", BMW_E60);

    shared_ptr <Car> BMW_M5_E60 = make_shared<Car>();

    configurator->SetCarFactory(make_shared <BMW_M5_E60_V10>());
    configurator->Configure((BMW_M5_E60));
    PrintCarConfiguration("BMW M5 E60 Sedan", BMW_M5_E60);
	return 0;
}

