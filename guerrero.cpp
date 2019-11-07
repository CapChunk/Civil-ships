#include "guerrero.h"

string Guerrero::getId() const
{
    return Id;
}

void Guerrero::setId(const string &value)
{
    Id = value;
}

size_t Guerrero::getHealth() const
{
    return Health;
}

void Guerrero::setHealth(const size_t &value)
{
    Health = value;
}

double Guerrero::getStrengh() const
{
    return Strengh;
}

void Guerrero::setStrengh(double value)
{
    Strengh = value;
}

double Guerrero::getShield() const
{
    return Shield;
}

void Guerrero::setShield(double value)
{
    Shield = value;
}

string Guerrero::getKlas() const
{
    return klas;
}

void Guerrero::setKlas(const string &value)
{
    klas = value;
}

Guerrero::Guerrero()
{
    
}

Guerrero::Guerrero(string a, size_t b, double c, double d, string e)
{
    this->setId(a);
    this->setHealth(b);
    this->setStrengh(c);
    this->setShield(d);
    this->setKlas(e);
}
