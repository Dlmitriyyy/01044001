#pragma once
#include <iostream>
#include "engine.h"
#include "transmission.h"
#include "vehicle.h"
using namespace std;

class Car
{
private:
    shared_ptr <Engine> engine;
    shared_ptr <Transmission> transmission;
    shared_ptr <DriveTrain> drivetrain;
    shared_ptr <Brakes> brakes;
    shared_ptr <Wheels> wheels;
    shared_ptr <Interior> interior;
    shared_ptr <Body> body;
    shared_ptr <Color> color;
    shared_ptr <Price> price;
public:
    Car()
    {
        engine = nullptr;
        transmission = nullptr;
        drivetrain = nullptr;
        brakes = nullptr;
        wheels = nullptr;
        interior = nullptr;
        body = nullptr;
        color = nullptr;
        price = nullptr;
    }
    virtual ~Car() {}

    shared_ptr <Engine> GetEngine()
    {
        return engine;
    }
    void SetEngine(shared_ptr <Engine> pEngine)
    {
        engine = (pEngine);
    }
    shared_ptr <Transmission> GetTransmission()
    {
        return transmission;
    }
    void SetTransmission(shared_ptr <Transmission> pTransmission)
    {
        transmission = (pTransmission);
    }
    shared_ptr <DriveTrain> GetDriveTrain()
    {
        return drivetrain;
    }
    void SetDriveTrain(shared_ptr <DriveTrain> pDriveTrain)
    {
        drivetrain = (pDriveTrain);
    }
    shared_ptr <Brakes> GetBrakes()
    {
        return brakes;
    }
    void SetBrakes(shared_ptr <Brakes> pBrakes)
    {
        brakes = (pBrakes);
    }
    shared_ptr <Wheels> GetWheels()
    {
        return wheels;
    }
    void SetWheels(shared_ptr <Wheels> pWheels)
    {
        wheels = (pWheels);
    }
    shared_ptr <Interior> GetInterior()
    {
        return interior;
    }
    void SetInterior(shared_ptr <Interior> pInterior)
    {
        interior = (pInterior);
    }
    shared_ptr <Body> GetBody()
    {
        return body;
    }
    void SetBody(shared_ptr <Body> pBody)
    {
        body = (pBody);
    }
    shared_ptr <Color> GetColor()
    {
        return color;
    }
    void SetColor(shared_ptr <Color> pColor)
    {
        color = (pColor);
    }
    shared_ptr <Price> GetPrice()
    {
        return price;
    }
    void SetPrice(shared_ptr <Price> pPrice)
    {
        price = (pPrice);
    }
};