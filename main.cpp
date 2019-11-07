#include <iostream>
#include "videog.h"
using namespace std;

videoG SEGA;
string value;
 int p;
int main()
{
    int o ;
      enum {
         Nombredeusuario=1,
     Agregarcivilizacion,
            InsertarCivilizacion,
          CrearCivilizaciones ,
            PrimeraCivilizacion ,
          UltimaCivilizacion,
          Ordenar,
            EliminarCivilizacion,
           Resumen,
          SeleccionarCivilizacion,
          Respaldar,
          Recuperar,
         Salir

      };
      o=0;
      while(o >=0){

          cout << "Menu Civilizacion"<<endl
             <<    "1 )  Nombre de usuario"<<endl
             <<    "2) Agregar civilizacion"<<endl
            <<     "3)Insertar Civilizacion"<<endl
            <<     "4)Crear Civilizaciones "<<endl
           <<      "5)Primera Civilizacion "<<endl
           <<      "6)Ultima Civilizacion"<<endl
             <<     "7) Ordenar"<<endl
            <<      "8) Eliminar Civilizacion"<<endl
             <<    "9) Resumen"<<endl
             <<    "10) Seleccionar Civilización"<<endl
              << "11) Respaldar"<<endl
              << "12) Recuperar"<<endl
              <<    "13) Salir"<<endl;
            cin>>o;

      switch (o) {
    case  Nombredeusuario:{
          cout << "Ingrese el nombre de usuario: "<< endl;
         cin.ignore();
          getline(cin,value);
          SEGA.setUname(value);
          o=0;}
          break;
             case Agregarcivilizacion:
      {   SEGA.Agregar(SEGA.Born());
         o=0;}
          break;
      case InsertarCivilizacion:
      {cout<<"En que posicion inertara la civilizacion?"<<endl;
          cin.ignore();
          cin>>p;
          SEGA.Insertar(SEGA.Born(),p);
          o=0;}
          break;
      case CrearCivilizaciones:
      {cout<<"Cuantas civilizacione creará?"<<endl;
          cin.ignore();
          cin>>p;
          SEGA.Genesis(SEGA.Born(),p);
          o=0;}
          break;
      case  PrimeraCivilizacion:
     {     cout<<SEGA.First().Tostr() <<endl;
          o=0;
          break;
                 case  UltimaCivilizacion:
           cout<< SEGA.Last().Tostr()<<endl;
          o=0;}
          break;
      case  Ordenar:{
          SEGA.Capitalism();
          o=0;}
          break;
                  case  EliminarCivilizacion:
      {
          cout<<"Ingrese el nombre de la civilizacion a Eliminar: "<<endl;
          cin.ignore();
          getline(cin,value);
          SEGA.Pandemia(value);
          o=0;}
          break;
      case SeleccionarCivilizacion:
     {
         size_t v;

          v= SEGA.Submenu();
          SEGA.Midsomer(v);

      }break;
                  case  Resumen:
          cout<<SEGA<<endl;
          SEGA.show();
          o=0;
   break;
      case Respaldar:{
        SEGA.respaldar();
        o=0;
      }break;
      case Recuperar:{
      SEGA.recuperar();
      o=0;
      }break;
      case  Salir:{
             cout<<"Que tenga buen dia"<<endl;
             o=-1;}
          break;

      default:
        {  cout<<"No sabe contar?"<<endl;}
          break;
      }
}
      }
