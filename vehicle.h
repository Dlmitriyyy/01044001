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
        cout << "Характеристики двигуна: " << endl;
        cout << "Тип палива            : Дизель. " << endl;
        cout << "Об'єм двигуна         :" << endl;
        cout << "Кількість циліндрів   :" << endl;
        cout << "Потужність            :" << endl;
        cout << "Розгін до 100км/год   :" << endl;
        cout << "Максимальна швидкість :" << endl;
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
        return "Дискові гальма.";
    }
};

class CeramicBrakes : public Brakes
{
public:
    string Method() override
    {
        return "Керамічні гальма.";
    }
};

class SedanE60 : public Body
{
public:
    string Method() override
    {
        return "Седан.";
    }
};

class UniversalE61 : public Body
{
public:
    string Method() override
    {
        return "Універсал.";
    }
};

class WheelsE60_17 : public Wheels
{
public:
    string Method() override
    {
        return "Диски 17 дюймів.";
    }
};

class WheelsE60_18 : public Wheels
{
public:
    string Method() override
    {
        return "Диски 18 дюймів.";
    }
};

class WheelsM5E60_19 : public Wheels
{
public:
    string Method() override
    {
        return "Диски 19 дюймів.";
    }
};

class WheelsM5E60_20 : public Wheels
{
public:
    string Method() override
    {
        return "Диски 20 дюймів.";
    }
};

class RearWheelDrive : public DriveTrain
{
public:
    string Method() override
    {
        return "Задній.";
    }
};

class AllWheelDrive : public DriveTrain
{
public:
    string Method() override
    {
        return "Постійний повний.";
    }
};

class ClothInterior : public Interior
{
public:
    string Method() override
    {
        return "Сидіння із тканинною оббивкою.";
    }
};

class LeatherInterior : public Interior
{
public:
    string Method() override
    {
        return "Сидіння із шкіряною оббивкою.";
    }
};

class WhiteColor : public Color
{
public:
    string Method() override
    {
        return "Білий колір.";
    }
};

class BlackColor : public Color
{
public:
    string Method() override
    {
        return "Чорний колір.";
    }
};

class RedColor : public Color
{
public:
    string Method() override
    {
        return "Червоний колір.";
    }
};

class GreenColor : public Color
{
public:
    string Method() override
    {
        return "Зелений колір.";
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