#pragma once
#include <iostream>
#include "vehicle.h"
using namespace std;

class GasolineEngine : public Engine
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
         return "Максимальна швидкість : ";
     }
};

class InjectionEngine : public GasolineEngine
{
public:
	string Method() override
	{
        return DisplayEngine();
	}
    virtual string DisplayEngine()
    {
        cout << "Характеристики двигуна: " << endl;
        cout << "Тип палива            : Бензин. " << endl;
        cout << "Об'єм двигуна         : " << endl;
        cout << "Кількість циліндрів   : " << endl;
        cout << "Потужність            : " << endl;
        cout << "Розгін до 100км/год   : " << endl;
        cout << "Максимальна швидкість : " << endl;
        return "Максимальна швидкість : ";
    }
};

class BWM520i : public InjectionEngine
{
public :
    string Method() override
    {
        return DisplayEngine();
    }
    string DisplayEngine() override
    {
        cout << "Характеристики двигуна: " << endl;
        cout << "Тип палива            : Бензин. " << endl;
        cout << "Об'єм двигуна         : 2.0 літра." << endl;
        cout << "Кількість циліндрів   : 6" << endl;
        cout << "Потужність            : 150-170 к.с." << endl;
        cout << "Розгін до 100км/год   : 8.5-9.5 секунд." << endl;
        return "Максимальна швидкість : 225-230 км/год.";
    }
};

class BMW523i : public InjectionEngine
{
public:
    string Method() override
    {
        return DisplayEngine();
    }
    string DisplayEngine() override
    {
        cout << "Характеристики двигуна: " << endl;
        cout << "Тип палива            : Бензин. " << endl;
        cout << "Об'єм двигуна         : 2.5 літра." << endl;
        cout << "Кількість циліндрів   : 6" << endl;
        cout << "Потужність            : 177-204 к.с." << endl;
        cout << "Розгін до 100км/год   : 8.0-8.3 секунди." << endl;
        return "Максимальна швидкість : 240-245 км/год.";
    }
};

class BMW525i : public InjectionEngine
{
public:
    string Method() override
    {
        return DisplayEngine();
    }
    string DisplayEngine() override
    {
        cout << "Характеристики двигуна: " << endl;
        cout << "Тип палива            : Бензин. " << endl;
        cout << "Об'єм двигуна         : 3.0 літра." << endl;
        cout << "Кількість циліндрів   : 6" << endl;
        cout << "Потужність            : 218 к.с." << endl;
        cout << "Розгін до 100км/год   : 7.5-7.8 секунд." << endl;
        return "Максимальна швидкість : 245-250 км/год.";
    }
};

class BMW530i : public InjectionEngine
{
public:
    string Method() override
    {
        return DisplayEngine();
    }
    string DisplayEngine() override
    {
        cout << "Характеристики двигуна: " << endl;
        cout << "Тип палива            : Бензин. " << endl;
        cout << "Об'єм двигуна         : 3.0 літра." << endl;
        cout << "Кількість циліндрів   : 6" << endl;
        cout << "Потужність            : 258-272 к.с." << endl;
        cout << "Розгін до 100км/год   : 6.5-6.7 секунд." << endl;
        return "Максимальна швидкість : 250-255 км/год.";
    }
};

class BMWM5V10 : public InjectionEngine
{
public:
    string Method() override
    {
        return DisplayEngine();
    }
    string DisplayEngine() override
    {
        cout << "Характеристики двигуна: " << endl;
        cout << "Тип палива            : Бензин. " << endl;
        cout << "Об'єм двигуна         : 5.0 літрів." << endl;
        cout << "Кількість циліндрів   : 10" << endl;
        cout << "Потужність            : 500 к.с." << endl;
        cout << "Розгін до 100км/год   : 4.1 секунди." << endl;
        return "Максимальна швидкість : 255 км/год.";
    }
};

class DieselEngine : public Engine 
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
        return "Максимальна швидкість : 225-230 км/год.";
    }
};

class BMW520d : public DieselEngine
{
public:
    string Method() override
    {
        return DisplayEngine();
    }
    string DisplayEngine() override
    {
        cout << "Характеристики двигуна: " << endl;
        cout << "Тип палива            : Дизель. " << endl;
        cout << "Об'єм двигуна         : 2.0 літра." << endl;
        cout << "Кількість циліндрів   : 4" << endl;
        cout << "Потужність            : 163-177 к.с." << endl;
        cout << "Розгін до 100км/год   : 8.1-8.5 секунд." << endl;
        return "Максимальна швидкість : 220-225 км/год.";
    }
};

class BMW525d : public DieselEngine
{
public:
    string Method() override
    {
        return DisplayEngine();
    }
    string DisplayEngine() override
    {
        cout << "Характеристики двигуна: " << endl;
        cout << "Тип палива            : Дизель. " << endl;
        cout << "Об'єм двигуна         : 3.0 літра." << endl;
        cout << "Кількість циліндрів   : 6" << endl;
        cout << "Потужність            : 197-218 к.с." << endl;
        cout << "Розгін до 100км/год   : 7.0-7.2 секунд." << endl;
        return "Максимальна швидкість : 235-240 км/год.";
    }
};

class BMW530d : public DieselEngine
{
public:
    string Method() override
    {
        return DisplayEngine();
    }
    string DisplayEngine() override
    {
        cout << "Характеристики двигуна: " << endl;
        cout << "Тип палива            : Дизель. " << endl;
        cout << "Об'єм двигуна         : 3.0 літра." << endl;
        cout << "Кількість циліндрів   : 6" << endl;
        cout << "Потужність            : 218-235 к.с." << endl;
        cout << "Розгін до 100км/год   : 6.3-6.5 секунд." << endl;
        return "Максимальна швидкість : 245-250 км/год.";
    }
};

