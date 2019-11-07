#ifndef BARCO_H
#define BARCO_H
#include <iomanip>
#include<iostream>
#include <stack>
#include"guerrero.h"
using namespace std;

class Barco
{
    string Id;
    double Fuel;
    double Velocity;
    double armor;

    stack<Guerrero> army;
public:
    Barco();
    Guerrero reclutar();
    void AgregarGuerrero(Guerrero one);
    void EliminarGuerrero();
    Guerrero Top();
    string getId() const;
    void setId(const string &value);
    double getFuel() const;
    void setFuel(double value);
    double getVelocity() const;
    void setVelocity(double value);
    double getArmor() const;
    void setArmor(double value);
    size_t armysize();
    void menuwarros();
};

#endif // BARCO_H
