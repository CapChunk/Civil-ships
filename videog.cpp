#include "videog.h"
#include <iomanip>
#include "string"
#include <ostream>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
string videoG::getUname() const
{
    return Uname;
}

void videoG::setUname(const string &value)
{
    Uname = value;
}
Civilization videoG::Born()
{
    string Cname;
    int x;
    int y;

    cout<<"Ingrese el nombre de la civilizacion a crear: "<<endl;
    cin.ignore();
    getline(cin,Cname);
    cout<<"Ingrese la coordenada en X: "<<endl;
    cin>>x;
    cout<<"Ingrese la coordenada en Y: "<<endl;
    cin.ignore();
    cin>>y;
Civilization a(Cname, x, y);
return a;
}
size_t videoG::Submenu()
{
    size_t op,dat=0;
    while (dat==0) {
    for (size_t i= 0; i < mesopotamia.size(); ++i) {
        cout<<i+1<<")   "<<mesopotamia[i].getCname()<<""<<endl;}
    cout<< "Seleccione una civilizacion: "<<endl;
    cin>>op;
    if(op>0 && op<=mesopotamia.size())
    {return op-1; dat = 2;}
    else {
        cout<< "Opcion no valida, escriba otra opcion"<<endl;
        dat = 0;
    }
        }
}
void videoG::Midsomer(size_t &chusen)  // Chusen es un mal chiste de la palabra Choosen que significa elegidos, el elemento elegido en la lista
{
    size_t o;
    enum{
      Agregaraldeano =1,
        EliminarAldeano,
        OrdenarAldeanos,
        Mostraraldeanos,
        AgregarBarco,
        MostrarBarcos,
        BuscarBarcos,
        EliminarBarcos,
        salir
    };
    while (o!=9) {

    cout<<"1) Agregar aldeano"<<endl;
    cout<<"2) Eliminar aldeano"<<endl;
    cout<<"3) Ordenar aldeanos"<<endl;
    cout<<"4) Mostrar aldeanos"<<endl;
    cout<<"5) Agregar Barcos"<<endl;
     cout<<"6) Mostrar Barcos"<<endl;
      cout<<"7) Buscar Barcos"<<endl;
       cout<<"8) Eliminar Barcos"<<endl;
       cout<<"9) Salir"<<endl;
    cout<<"Elija una opcion: "<<endl;
    cin>>o;

    switch (o) {
    case Agregaraldeano:
    {
        size_t y=0;
        cout<<"1) Agregar al inicio"<<endl;
        cout<<"2) Agregar al final"<<endl;
        cin>>y;

        if(y==1)
        {  mesopotamia[chusen].AgregarAldeanoi(this->registro(chusen));}
        else if (y==2)
        { mesopotamia[chusen].AgregarAldeanof(this->registro(chusen));}
        o=0;
    }
        break;    case EliminarAldeano:
    {
        size_t y;
        cout<<"1) Eliminar por nombre"<<endl;
        cout<<"2) Eliminar por nivel de salud"<<endl;
        cout<<"3) Eliminar aldeanos mayores de 59 años"<<endl;
        cin>>y;
         cin.ignore();
        if(y==1)
        {
            string mrder;
            cout<<"Ingrese el nombre del aldeano a liquidar"<<endl;
            getline(cin,mrder);
         mesopotamia[chusen].Asesinar(mrder);
        }else if (y == 2) {
            size_t u;
            cout<<"Ingrese el nivel de salud minima"<<endl;
            cin>>u;
          mesopotamia[chusen].Abnegacion(u);
} else if (y==3) {
             mesopotamia[chusen].Sacrifice();
}
        o=0;
    }
        break;
    case OrdenarAldeanos:
    {
        int oe=0;
        while (oe==0) {
        size_t q;
   cout<<"1)Ordenar por nombre"<<endl; //ascendete
      cout<<"2)Ordenar por edad"<<endl;//descend
         cout<<"3)Ordenar por salud"<<endl;//descend
         cin>>q;

         if(q==1){
             mesopotamia[chusen].pornoMbre();
             oe=1;
         }else if (q==2) {
             mesopotamia[chusen].Poredad();
oe=1;
}else if (q==3) {
             mesopotamia[chusen].porsalud();
             oe=1;
}else {
cout<<"Opcion no valida"<<endl;
oe=0;
}    }

    o=0; }
        break;
    case Mostraraldeanos:
    {
mesopotamia[chusen].show();
o=0;
    }
        break;
    case AgregarBarco:
    {
    mesopotamia[chusen].Agregar_Bark(mesopotamia[chusen].astillero());
     o=0;
    }
        break;
    case MostrarBarcos:
    {
        mesopotamia[chusen].Mostrar_barquitos();
         o=0;
    }
        break;
    case BuscarBarcos:
    {
        string sir;
        cout<<"Ingrese el Id del barco a buscar:"<<endl;
        cin.ignore();
        getline(cin,sir);
        mesopotamia[chusen].Marco(sir);

       // AQUI FALTA PONERLE LA CONECTADA PARA QUE SELECCIONE EL BARCO Y MUESTRE EL SUBMENU
   // Y TAMBIEN QUE CUANDO ELIMINE BARCOS, LIBERE LA MEMORIA DEL PUNTERO
         o=0;

    }
        break;
    case EliminarBarcos:
    {       string rr;
        double ee;
        size_t up,oe=0;
        while (oe==0) {


        cout<<"1) Eliminar por Id"<<endl;
        cout<<"2)Eliminar por combustible"<<endl;
        cout<<"3)Salir"<<endl;
        cout<<"Elegir Opcion: ";
        cin>>up;
  if(up>0 && up<4)
      if(up==1)
        {cout<<"Ingrese El id del barco a eliminar"<<endl;
          cin.ignore();
  getline(cin,rr);
          mesopotamia[chusen].kbum(rr);
          oe=0;
      }else if (up==2) {
cout<<"Ingrese la cantidad minima de combustible"<<endl;
cin>>ee;
mesopotamia[chusen].Fired(ee);
    oe=0;  }else{  oe=1;}

        }
  o=0;
    }
        break;
    case salir:
    {
    o=9;
    }break;
    default:
        break;
    }
    }
}

Aldeano videoG::registro(size_t &chusen)
{
    string a;   //Nombre
    size_t b,c,d;    //Edad,Genero,Salud respectivamente
    size_t x=0;
    cin.ignore();
    cout<<"Ingrese el nombre del nuevo ciudadano de los "<< mesopotamia[chusen].getCname() <<endl;
     getline(cin, a);
     cout<<"Ingrese la edad de "<<a<<":"<<endl;
     cin>>b;
     cout<<"Ingrese el genero de "<<a<<":  (Seleccione 0 para masculino 1 para femenino )"<<endl;
     cin>>c;
     while(x==0){
     cout<<"Ingrese la salud actual de "<<a<<": (solo de 1 a 100)"<<endl;
     cin>>d;
     if(d<1 || d>100)
     {     cout<<" El nivel de salud es incorrecto, intente de nuevo"<<endl;  x=0;}
     else{   x=1;   }
     }
     Aldeano s(a,b,c,d);
     return  s;
}

void videoG::respaldar()
{
    ofstream archivo("C:\\Users\\Juan\\Desktop\\BRAIN\\RespaldaBoits\\Civilizaciones.txt", ios ::out);
    if (archivo.is_open())
    {
        for (size_t i = 0; i < mesopotamia.size(); ++i)
        {
            Civilization &C = mesopotamia[i];
            archivo << C;
            C.respaldar_aldeanos(archivo);
        }
        archivo.close();
    }
}

void videoG::recuperar()
{
    ifstream archivo("C:\\Users\\Juan\\Desktop\\BRAIN\\RespaldaBoits\\Civilizaciones.txt", ios ::in);
        if(archivo.is_open())
        {
            while(!archivo.eof())
            {

                string n,x,y,z;
                Civilization v;
                int ubc, count;

                getline(archivo, n);
                if(archivo.eof())
                {
                    break;
                }
                v.setCname(n);

                getline(archivo, n);
                ubc = stoi(n);
                v.setX(ubc);

                getline(archivo, n);
                ubc = stoi(n);
                v.setY(ubc);

                getline(archivo, n);
                count = stoi(n);

                for(size_t i=0; i< count; ++i)
                {
                    size_t e,g,s;
                    Aldeano al;

                    getline(archivo, n);
                    al.setName(n);

                    getline(archivo, x);
                    g = stoi(x);
                   al.setGender(g);

                    getline(archivo, y);
                    e = stoi(y);
                   al.setAge(e);

                    getline(archivo, z);
                    s = stoi(z);
                  al.setHealth(s);
//                   al = Aldeano(n,e,g,s);
                    v.AgregarAldeanof(al);
                }
                Agregar(v);
            }
        }

}


videoG::videoG()
{
}

void videoG::Agregar(const Civilization &ghost)
{
    mesopotamia.push_back(ghost);
}
void videoG::Insertar(const Civilization &ghost, size_t p)
{
    if(p<mesopotamia.size())
    {mesopotamia.insert(mesopotamia.begin()+p, ghost); } // INSERT (  VECTOR.BEGIN()+ posicion , COSA )
    else {
        cout<<"Posicion invalida we"<<endl;
    }
}

void videoG::Genesis(const Civilization &ghost, size_t p)
{
    mesopotamia = vector<Civilization>(p,ghost);  // CANTIDAD , COSAS
}

Civilization videoG::First()
{
    return mesopotamia.front();
}

Civilization videoG::Last()
{
    return mesopotamia.back();
}

void videoG::Capitalism()
{
   sort(mesopotamia.begin() , mesopotamia.end());
}

void videoG::Pandemia(const string &chosen)
{
    for (size_t i = 0; i < mesopotamia.size(); ++i) {
        if(chosen == mesopotamia[i].getCname())
        {mesopotamia.erase(mesopotamia.begin()+i);}
    }
}

size_t videoG::Total()
{
    return mesopotamia.size();
}

void videoG::show()
{
    for (size_t i= 0; i < mesopotamia.size(); ++i) {
        cout<<""<<endl;
        cout<<"Nombre de la civilizacion: "<<mesopotamia[i].getCname()<<""<<endl;
        cout<<"Posicion en X: "<<mesopotamia[i].getX()<<""<<endl;
        cout<<"Posicion en Y: "<<mesopotamia[i].getY()<<""<<endl;
    }

}


