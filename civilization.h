#ifndef CIVILIZATION_H
#define CIVILIZATION_H
#include <iomanip>
#include "string.h"
#include <iostream>
#include <list>
#include "aldeano.h"
#include <fstream>
#include<sstream>
#include<list>
#include "barco.h"
using namespace std;

class Civilization
{
    string Cname;
    int x;
    int y;
    list <Aldeano> people;
    list<Barco*> puerto;

public:

    Civilization();
    void Agregar_Bark(Barco *x);
    void Mostrar_barquitos();
    Barco* astillero();
    void kbum(string &poreeeso);  // ELIMINAR BARCO POR ID
    void Fired(double &joven);  // ELIMINAR BARCO POR COMBUSTIBLE
    void Marco(string &polo);
    // LO ANTERIOR DE LAS PURAS CIVILIZACIONES Y ESE JALE

    Civilization(string &a, int &x , int &y);
    string getCname() const;
    void setCname(const string &value);
    int getX() const;
    void setX(int value);
    int getY() const;
    void setY(int value);

    void show();

   size_t sais();
   //Agragar
    void AgregarAldeanoi(const Aldeano &a);
    void AgregarAldeanof(const Aldeano &a);

    //Eliminar
    void Asesinar(const string &nom);
    void Abnegacion(size_t &lf);
    void Sacrifice();

    //Ordenar
     void porsalud();
     void pornoMbre();
     void Poredad();

     //Respa;dar
     string Tostr();
     void respaldar_aldeanos(ofstream &C)
     {
         for (auto i = people.begin(); i != people.end(); i++)
         {
             Aldeano& a = *i;
             C << a; // C sera el Ofstream del parámetro y le agrega los aldeanos
         }
     }

    bool operator<(const Civilization& ghost) const
    {
        return x < ghost.getX();
    }

    friend ostream& operator<<(ostream &out,
                               Civilization& a)
    {
        out  <<a.Cname << endl <<
               a.x  << endl <<
               a.y<< endl <<
               a.sais()<<endl;
        return out;
    }


};

#endif // CIVILIZATION_H
