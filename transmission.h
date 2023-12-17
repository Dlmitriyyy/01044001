#pragma once
#include <iostream>
#include "vehicle.h"
using namespace std;

class ManualTransmisson : public Transmission
{
public:
    string Method() override
    {
        return "Механічна.";
    }
};

class AutomaticTrancmission : public Transmission
{
public:
    string Method() override
    {
        return "Автоматична.";
    }
};

class ContinuouslyVariableTransmission : public Transmission
{
public:
    string Method() override
    {
        return "Безступінчаста.";
    }
};

class SeqeuentialManualGearbox : public Transmission
{
public:
    string Method() override
    {
        return "Секвентальна механічна.";
    }
};

class Steptronic : public Transmission
{
public:
    string Method() override
    {
        return "Стептронік.";
    }
};