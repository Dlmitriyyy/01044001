#pragma once
#include <iostream>
#include "vehicle.h"
#include "transmission.h"
#include "engine.h"
#include "carconfigurator.h"
using namespace std;

class CarFactory
{
public:
    virtual shared_ptr <Engine> CreateEngine() = 0;
    virtual shared_ptr <Transmission> CreateTransmission() = 0;
    virtual shared_ptr <DriveTrain> CreateDrivetrain() = 0;
    virtual shared_ptr <Brakes> CreateBrakes() = 0;
    virtual shared_ptr <Wheels> CreateWheels() = 0;
    virtual shared_ptr <Interior> CreateInterior() = 0;
    virtual shared_ptr <Body> CreateBody() = 0;
    virtual shared_ptr <Color> CreateColor() = 0;
    virtual shared_ptr <Price> CreatePrice() = 0;
};

class BMW_E61_525d : public CarFactory
{
public:
    shared_ptr <Engine> CreateEngine()
    {
        return (make_shared <BMW525d>());
    }
    shared_ptr <Transmission> CreateTransmission()
    {
        return (make_shared <Steptronic>());
    }
    shared_ptr <DriveTrain> CreateDrivetrain()
    {
        return (make_shared <RearWheelDrive>());
    }
    shared_ptr <Brakes> CreateBrakes()
    {
        return (make_shared <DiscBrakes>());
    }
    shared_ptr <Wheels> CreateWheels()
    {
        return (make_shared <WheelsE60_18>());
    }
    shared_ptr <Interior> CreateInterior()
    {
        return (make_shared <ClothInterior>());
    }
    shared_ptr <Body> CreateBody()
    {
        return (make_shared <UniversalE61>());
    }
    shared_ptr <Color> CreateColor()
    {
        return (make_shared <GreenColor>());
    }
    shared_ptr <Price> CreatePrice()
    {
        return (make_shared <PriceE61>());
    }
};

class BMW_E60_523i : public CarFactory
{
public:
    shared_ptr <Engine> CreateEngine()
    {
        return (make_shared <BMW523i>());
    }
    shared_ptr <Transmission> CreateTransmission()
    {
        return (make_shared <AutomaticTrancmission>());
    }
    shared_ptr <DriveTrain> CreateDrivetrain()
    {
        return (make_shared <RearWheelDrive>());
    }
    shared_ptr <Brakes> CreateBrakes()
    {
        return (make_shared <DiscBrakes>());
    }
    shared_ptr <Wheels> CreateWheels()
    {
        return (make_shared <WheelsE60_17>());
    }
    shared_ptr <Interior> CreateInterior()
    {
        return (make_shared <ClothInterior>());
    }
    shared_ptr <Body> CreateBody()
    {
        return (make_shared <SedanE60>());
    }
    shared_ptr <Color> CreateColor()
    {
        return (make_shared <RedColor>());
    }
    shared_ptr <Price> CreatePrice()
    {
        return (make_shared <PriceE60>());
    }
};

class BMW_M5_E60_V10 : public CarFactory
{
public:
    shared_ptr <Engine> CreateEngine()
    {
        return (make_shared <BMWM5V10>());
    }
    shared_ptr <Transmission> CreateTransmission()
    {
        return (make_shared <SeqeuentialManualGearbox>());
    }
    shared_ptr <DriveTrain> CreateDrivetrain()
    {
        return (make_shared <AllWheelDrive>());
    }
    shared_ptr <Brakes> CreateBrakes()
    {
        return (make_shared <CeramicBrakes>());
    }
    shared_ptr <Wheels> CreateWheels()
    {
        return (make_shared <WheelsM5E60_20>());
    }
    shared_ptr <Interior> CreateInterior()
    {
        return (make_shared <LeatherInterior>());
    }
    shared_ptr <Body> CreateBody()
    {
        return (make_shared <SedanE60>());
    }
    shared_ptr <Color> CreateColor()
    {
        return (make_shared <WhiteColor>());
    }
    shared_ptr <Price> CreatePrice()
    {
        return (make_shared <PriceM5E60>());
    }
};