#include "barco.h"

string Barco::getId() const
{
    return Id;
}

void Barco::setId(const string &value)
{
    Id = value;
}

double Barco::getFuel() const
{
    return Fuel;
}

void Barco::setFuel(double value)
{
    Fuel = value;
}

double Barco::getVelocity() const
{
    return Velocity;
}

void Barco::setVelocity(double value)
{
    Velocity = value;
}

double Barco::getArmor() const
{
    return armor;
}

void Barco::setArmor(double value)
{
    armor = value;
}

size_t Barco::armysize()
{
    return  army.size();
}

void Barco::menuwarros()
{
    size_t gj;
    cout<<"Menu del barco : "<<Id<<endl;
    cout<<"1) Agregar Guerrero"<<endl;
    cout<<"2)Eliminar Guerrero"<<endl;
    cout<<"3)Mostrar Ultimo Guerrero"<<endl;
    cout<<"4)Mostrar Guerreros"<<endl;
    cin>>gj;

    switch (gj) {
    case 1:
    {
        this->AgregarGuerrero(reclutar());
    }
break;
    case 2:
    {EliminarGuerrero(); }break;
    case 3:
    {Top();}break;
    case 4:
    {
        stack<Guerrero> copy(army);
        cout<<"Guerreros del barco: "<<Id<<endl;
        cout << setw(1)<<"|ID|"<<
               setw(3)    <<"|Salud|"<<
                setw(5)   <<"|Fuerza|"<<
                setw(7) <<"|Escudo|"<<
                setw(9)<<"|Clase|"<<endl;
        while (!copy.empty()) {
            Guerrero &l = copy.top();
            cout<<l<<endl;
            copy.pop();
        }
    }break;
    }
}
void Barco::AgregarGuerrero(Guerrero one)
{
    army.push(one);
}

void Barco::EliminarGuerrero()
{
    army.pop();
}

Guerrero Barco::Top()
{
    return army.top();
}
Barco::Barco()
{
    armor = 100.0;
    Velocity= 0.0;
    Fuel = 100;
}

Guerrero Barco::reclutar()
{
    size_t cls,s;
    string n,c;
    double f,e;

    cout<<"Ingrese el id del guerrero (nombre)"<<endl;
    cin.ignore();
    getline(cin,n);
    cout<<"(0 - 100)Ingrese la salud de "<<n<<endl;
    cin>>s;
    cin.ignore();
    cout<<"(0.0 - 60.0)Ingrese la Fuerza de "<<n<<endl;
    cin>>f;
    cin.ignore();
    cout<<"(0.0 - 30.0)Ingrese el Escudo de "<<n<<endl;
    cin>>e;
    cin.ignore();
    cout<<"Elija con un numero el tipo de Guerrero"<<endl;
    cout<<"1)Warrior "<<endl;
    cout<<"2)Priest "<<endl;
    cout<<"3)Mage "<<endl;
    cout<<"4)Rouge "<<endl;
    cout<<"5)Paladin "<<endl;
    cout<<"6)Druid "<<endl;
    cout<<"7)Warlock "<<endl;
    cin>>cls;
    switch (cls) {
case 1:
    {c = "Warrior"; }
        break;
    case 2:
    {c = "Priest";}
        break;
    case 3:
    {c = "Mage"; }
        break;
    case 4:
    {c = "Rouge"; }
        break;
    case 5:
    {c = "Paladin";}
        break;
    case 6:
    { c = "Druid";}
        break;
    case 7:
    {c = "Warlock";}
        break;
    }
    Guerrero h = Guerrero(n,s,f,e,c);

    return h;
}

stack<Guerrero> Barco::cpy()
{
    return  army;
}
