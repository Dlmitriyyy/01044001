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
         cout << "�������������� �������: " << endl;
         cout << "��� ������            : ������. " << endl;
         cout << "��'�� �������         :" << endl;
         cout << "ʳ������ �������   :" << endl;
         cout << "���������            :" << endl;
         cout << "����� �� 100��/���   :" << endl;
         return "����������� �������� : ";
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
        cout << "�������������� �������: " << endl;
        cout << "��� ������            : ������. " << endl;
        cout << "��'�� �������         : " << endl;
        cout << "ʳ������ �������   : " << endl;
        cout << "���������            : " << endl;
        cout << "����� �� 100��/���   : " << endl;
        cout << "����������� �������� : " << endl;
        return "����������� �������� : ";
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
        cout << "�������������� �������: " << endl;
        cout << "��� ������            : ������. " << endl;
        cout << "��'�� �������         : 2.0 ����." << endl;
        cout << "ʳ������ �������   : 6" << endl;
        cout << "���������            : 150-170 �.�." << endl;
        cout << "����� �� 100��/���   : 8.5-9.5 ������." << endl;
        return "����������� �������� : 225-230 ��/���.";
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
        cout << "�������������� �������: " << endl;
        cout << "��� ������            : ������. " << endl;
        cout << "��'�� �������         : 2.5 ����." << endl;
        cout << "ʳ������ �������   : 6" << endl;
        cout << "���������            : 177-204 �.�." << endl;
        cout << "����� �� 100��/���   : 8.0-8.3 �������." << endl;
        return "����������� �������� : 240-245 ��/���.";
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
        cout << "�������������� �������: " << endl;
        cout << "��� ������            : ������. " << endl;
        cout << "��'�� �������         : 3.0 ����." << endl;
        cout << "ʳ������ �������   : 6" << endl;
        cout << "���������            : 218 �.�." << endl;
        cout << "����� �� 100��/���   : 7.5-7.8 ������." << endl;
        return "����������� �������� : 245-250 ��/���.";
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
        cout << "�������������� �������: " << endl;
        cout << "��� ������            : ������. " << endl;
        cout << "��'�� �������         : 3.0 ����." << endl;
        cout << "ʳ������ �������   : 6" << endl;
        cout << "���������            : 258-272 �.�." << endl;
        cout << "����� �� 100��/���   : 6.5-6.7 ������." << endl;
        return "����������� �������� : 250-255 ��/���.";
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
        cout << "�������������� �������: " << endl;
        cout << "��� ������            : ������. " << endl;
        cout << "��'�� �������         : 5.0 ����." << endl;
        cout << "ʳ������ �������   : 10" << endl;
        cout << "���������            : 500 �.�." << endl;
        cout << "����� �� 100��/���   : 4.1 �������." << endl;
        return "����������� �������� : 255 ��/���.";
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
        cout << "�������������� �������: " << endl;
        cout << "��� ������            : ������. " << endl;
        cout << "��'�� �������         :" << endl;
        cout << "ʳ������ �������   :" << endl;
        cout << "���������            :" << endl;
        cout << "����� �� 100��/���   :" << endl;
        return "����������� �������� : 225-230 ��/���.";
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
        cout << "�������������� �������: " << endl;
        cout << "��� ������            : ������. " << endl;
        cout << "��'�� �������         : 2.0 ����." << endl;
        cout << "ʳ������ �������   : 4" << endl;
        cout << "���������            : 163-177 �.�." << endl;
        cout << "����� �� 100��/���   : 8.1-8.5 ������." << endl;
        return "����������� �������� : 220-225 ��/���.";
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
        cout << "�������������� �������: " << endl;
        cout << "��� ������            : ������. " << endl;
        cout << "��'�� �������         : 3.0 ����." << endl;
        cout << "ʳ������ �������   : 6" << endl;
        cout << "���������            : 197-218 �.�." << endl;
        cout << "����� �� 100��/���   : 7.0-7.2 ������." << endl;
        return "����������� �������� : 235-240 ��/���.";
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
        cout << "�������������� �������: " << endl;
        cout << "��� ������            : ������. " << endl;
        cout << "��'�� �������         : 3.0 ����." << endl;
        cout << "ʳ������ �������   : 6" << endl;
        cout << "���������            : 218-235 �.�." << endl;
        cout << "����� �� 100��/���   : 6.3-6.5 ������." << endl;
        return "����������� �������� : 245-250 ��/���.";
    }
};

