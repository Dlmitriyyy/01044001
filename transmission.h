#pragma once
#include <iostream>
#include "vehicle.h"
using namespace std;

class ManualTransmisson : public Transmission
{
public:
    string Method() override
    {
        return "��������.";
    }
};

class AutomaticTrancmission : public Transmission
{
public:
    string Method() override
    {
        return "�����������.";
    }
};

class ContinuouslyVariableTransmission : public Transmission
{
public:
    string Method() override
    {
        return "�������������.";
    }
};

class SeqeuentialManualGearbox : public Transmission
{
public:
    string Method() override
    {
        return "������������ ��������.";
    }
};

class Steptronic : public Transmission
{
public:
    string Method() override
    {
        return "���������.";
    }
};