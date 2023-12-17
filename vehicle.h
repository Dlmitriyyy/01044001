#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
public:
	virtual string Method() = 0;
	virtual ~Vehicle() {};
};

class Engine : public Vehicle 
{
public:
    string Method() override
    {
        return DisplayEngine();
    }
    virtual string DisplayEngine()
    {
        cout << "�������������� �������: " << endl;
        cout << "��� ������            : ������. " << endl;
        cout << "��'�� �������         :" << endl;
        cout << "ʳ������ �������   :" << endl;
        cout << "���������            :" << endl;
        cout << "����� �� 100��/���   :" << endl;
        cout << "����������� �������� :" << endl;
        return "";
    }
};

class Transmission : public Vehicle {};

class DriveTrain : public Vehicle {};

class Brakes : public Vehicle {};

class Wheels : public Vehicle {};

class Interior : public Vehicle {};

class Body : public Vehicle {};

class Color : public Vehicle {};

class Price : public Vehicle {};

class DiscBrakes : public Brakes
{
public:
    string Method() override
    {
        return "������ ������.";
    }
};

class CeramicBrakes : public Brakes
{
public:
    string Method() override
    {
        return "������� ������.";
    }
};

class SedanE60 : public Body
{
public:
    string Method() override
    {
        return "�����.";
    }
};

class UniversalE61 : public Body
{
public:
    string Method() override
    {
        return "��������.";
    }
};

class WheelsE60_17 : public Wheels
{
public:
    string Method() override
    {
        return "����� 17 �����.";
    }
};

class WheelsE60_18 : public Wheels
{
public:
    string Method() override
    {
        return "����� 18 �����.";
    }
};

class WheelsM5E60_19 : public Wheels
{
public:
    string Method() override
    {
        return "����� 19 �����.";
    }
};

class WheelsM5E60_20 : public Wheels
{
public:
    string Method() override
    {
        return "����� 20 �����.";
    }
};

class RearWheelDrive : public DriveTrain
{
public:
    string Method() override
    {
        return "�����.";
    }
};

class AllWheelDrive : public DriveTrain
{
public:
    string Method() override
    {
        return "�������� ������.";
    }
};

class ClothInterior : public Interior
{
public:
    string Method() override
    {
        return "������ �� ��������� ��������.";
    }
};

class LeatherInterior : public Interior
{
public:
    string Method() override
    {
        return "������ �� ������� ��������.";
    }
};

class WhiteColor : public Color
{
public:
    string Method() override
    {
        return "����� ����.";
    }
};

class BlackColor : public Color
{
public:
    string Method() override
    {
        return "������ ����.";
    }
};

class RedColor : public Color
{
public:
    string Method() override
    {
        return "�������� ����.";
    }
};

class GreenColor : public Color
{
public:
    string Method() override
    {
        return "������� ����.";
    }
};

class PriceE61 : public Price
{
public:
    string Method() override
    {
        return "$12000.";
    }
};

class PriceE60 : public Price
{
public:
    string Method() override
    {
        return "$14000.";
    }
};

class PriceM5E60 : public Price
{
public:
    string Method() override
    {
        return "$25000.";
    }
};