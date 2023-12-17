#pragma once
#include <iostream>
#include "car.h"
#include "vehicle.h"
#include "transmission.h"
#include "engine.h"
#include "carfactory.h"
using namespace std;

class CarConfigurator 
{
private:
    shared_ptr <CarFactory> carFactory;
public:
    CarConfigurator()
    {
        carFactory = nullptr;
    }
    virtual ~CarConfigurator() {}
    
    shared_ptr <CarFactory> GetCarFactory()
    {
       return (carFactory);
    }
    void SetCarFactory(shared_ptr <CarFactory> carCurrentFactory)
    {
        carFactory = (carCurrentFactory);
    }
    void Configure(shared_ptr <Car> car)
    {
        car->SetEngine((carFactory->CreateEngine()));
        car->SetTransmission((carFactory->CreateTransmission()));
        car->SetDriveTrain((carFactory->CreateDrivetrain()));
        car->SetBrakes((carFactory->CreateBrakes()));
        car->SetWheels((carFactory->CreateWheels()));
        car->SetInterior((carFactory->CreateInterior()));
        car->SetBody((carFactory->CreateBody()));
        car->SetColor((carFactory->CreateColor()));
        car->SetPrice((carFactory->CreatePrice()));
    }

    
};