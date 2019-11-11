#include "civilization.h"
#include <string>
#include <sstream>
string Civilization::getCname() const
{
    return Cname;
}

void Civilization::setCname(const string &value)
{
    Cname = value;
}

int Civilization::getX() const
{
    return x;
}

void Civilization::setX(int value)
{
    x = value;
}

int Civilization::getY() const
{
    return y;
}

void Civilization::setY(int value)
{
    y = value;
}

void Civilization::show()
{
 cout<<"Tabla de aldeanos : "<<endl;
 cout<<setw(1)<<"|Nombre|"<<
       setw(3)<<"|Genero|"<<
       setw(5)<<"|Salud|"<<
       setw(7)<<"|Edad |"<<endl;
for (list<Aldeano>::iterator it = people.begin(); it != people.end(); ++it)
        {
           cout << setw(1)<<'|'<<(*it).getName() <<'|'<<
           setw(3)<<'|'<<(*it).getGender() <<'|'<<
           setw(5)<<'|'<<(*it).getHealth() <<'|'<<
           setw(7)<<'|'<< (*it).getAge() <<'|'<< std::endl;
        }
}

size_t Civilization::sais()
{
    return   people.size();
}
void Civilization::AgregarAldeanoi(const Aldeano &a)
{
    people.push_front(a);
}

void Civilization::AgregarAldeanof(const Aldeano &a)
{
    people.push_back(a);
}

void Civilization::Asesinar(const string &nom)
{
    string t;
    for (auto it = people.begin(); it != people.end(); ++it)
    {  t=it->getName();
        if(t == nom)
        {
            people.erase(it);
            break;
        }
     }
}

void Civilization::Abnegacion(size_t &lf)
{
    size_t t;
    for (auto it = people.begin(); it != people.end();++it)
    { t = it->getHealth();
        if(t <= lf)
        {
            people.erase(it);
        }
     }
}

void Civilization::Sacrifice()
{
    size_t t;
    for (auto it = people.begin(); it != people.end();++it)
    {
        t= it->getAge();
        if(t > 58 )
        {
            people.erase(it);
        }
     }
}

Civilization::Civilization(string &a, int &x, int &y)
{
           this->setX(x);
            this->setY(y);
            this->setCname(a);
}
Civilization::Civilization(){}

void Civilization::Agregar_Bark(Barco *x)
{
    puerto.push_back(x);
}

void Civilization::Mostrar_barquitos()
{
    cout<<"Tabla de Barcos : "<<endl;
    cout<<setw(1)<<"|Id|"<<
          setw(3)<<"|Combustible|"<<
          setw(5)<<"|Velocidad|"<<
          setw(7)<<"|Armadura|"<<
          setw(9)<<"|Cantidad de Guerreros|"<<endl;
   for (list<Barco*>::iterator it = puerto.begin(); it != puerto.end(); ++it)
           {
              cout << setw(1)<<'|'<<(*it)->getId() <<'|'<<
              setw(3)<<'|'<<(*it)->getFuel() <<'|'<<
              setw(5)<<'|'<<(*it)->getArmor() <<'|'<<
              setw(7)<<'|'<< (*it)->getVelocity() <<'|'<<
              setw(9)<<'|'<<(*it)->armysize()<<'|'<< std::endl;
   }
}

Barco *Civilization::astillero()
{
    string id;
    double combustible;
    Barco *s = new Barco();\
    cin.ignore();
    cout<<"Ingrese el Id del barco"<<endl;
    getline(cin,id);
    s->setId(id);

    cout<<"Ingrese el combustible que lleva el barco"<<endl;
    cin>>combustible;
    cin.ignore();

    return  s;
}

void Civilization::kbum(string &poreeeso)
{
    string t;
    for (auto it = puerto.begin(); it != puerto.end(); ++it)
    {  t=(*it)->getId();
        if(t == poreeeso)
        {
            puerto.erase(it);
            break;
        }
    }
}

void Civilization::Fired(double &joven)
{
    double t;
    for (auto it = puerto.begin(); it != puerto.end();++it)
    { t = (*it)->getFuel();
        if(t < joven)
        {
            puerto.erase(it);
        }
    }
}

void Civilization::Marco(string &polo)
{
    string t;
    size_t opt;
    for (auto it = puerto.begin(); it != puerto.end(); ++it)
    {  t=(*it)->getId();
        if(t == polo)
        {
            size_t Xfiles = 0;
            while(Xfiles==0){
           cout<<"Astillero: Barco - "<<t<<endl;
           cout<<"1)Agregar guerrero"<<endl;
           cout<<"2)Eliminar guerrero"<<endl;
           cout<<"3)Mostrar ultimo guerrero"<<endl;
           cout<<"4)Mostrar todos los guerreros"<<endl;
           cout<<"5)Salir"<<endl;
           cin>>opt;
           switch (opt) {
           case 1:
           {
               (*it)->AgregarGuerrero((*it)->reclutar());
               Xfiles = 0;
           }break;
           case 2:
           { (*it)->EliminarGuerrero();
           Xfiles = 0;}
               break;
              case 3:
           {
               cout << setw(1)<<"|ID|"<<
                        setw(3)    <<"|Salud|"<<
                         setw(5)   <<"|Fuerza|"<<
                         setw(7) <<"|Armadura|"<<
                         setw(9)<<"|Clase|"<<endl;
               Guerrero hercules = (*it)->Top();
               cout<<hercules<<endl;
               Xfiles = 0;
           }
               break;
           case 4:
        {
               cout << setw(1)<<"|ID|"<<
                        setw(3)    <<"|Salud|"<<
                         setw(5)   <<"|Fuerza|"<<
                         setw(7) <<"|Armadura|"<<
                         setw(9)<<"|Clase|"<<endl;
               stack<Guerrero> Sparta = (*it)->cpy();
               while (!Sparta.empty()) {
               cout<< Sparta.top()<<endl;
              Sparta.pop();}
               Xfiles = 0;
           }break;
           case 5:
           { Xfiles =1; }break;
           }

           }
        }else {
cout<<"El barco no ha sido encontrado, no hay un barco con ese nombre en el astillero"<<endl;
}
    }

}


 void Civilization::pornoMbre()
        {
                people.sort(
                            [](const Aldeano &a1 ,const Aldeano &a2){
                    return a1.getName() < a2.getName();
                });
 }

 void Civilization::Poredad()
 {
     people.sort(
         [](const Aldeano &a1 ,const Aldeano &a2){
         return a1.getAge() > a2.getAge();});
 }

string Civilization::Tostr()
 {
     cout << left;
     cout << setw(25)<< "Nombre de Civilizacion" <<
             setw(20)<< "Coordenadas" << endl;

     stringstream k;
     k << Cname<< setw(20)<<"("<<getX()<<","<<getY()<<")"<<endl;
     return k.str();
 }

                void Civilization::porsalud()
        {
                people.sort(
                    [](const Aldeano &a1 ,const Aldeano &a2){
            return a1.getHealth() > a2.getHealth();});
    }


