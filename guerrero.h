#ifndef GUERRERO_H
#define GUERRERO_H
#include <iomanip>
#include<iostream>

using namespace std;
class Guerrero
{

string Id;
size_t Health;
double Strengh;
double Shield;
string klas; //Class
public:
    Guerrero();
   Guerrero(string a,size_t b,double c, double d , string e);
    string getId() const;
    void setId(const string &value);
    size_t getHealth() const;
    void setHealth(const size_t &value);
    double getStrengh() const;
    void setStrengh(double value);
    double getShield() const;
    void setShield(double value);
    string getKlas() const;
    void setKlas(const string &value);

    friend ostream& operator<<(ostream &out,
                               Guerrero& a)
    {
        out << setw(1)<<a.getId()<<
       setw(3)    <<a.getHealth()<<
        setw(5)   <<a.getStrengh()<<
        setw(7) <<a.getShield()<<
        setw(9)<<a.getKlas()<<endl;
        return out;
    }
};

#endif // GUERRERO_H
