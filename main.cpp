#include <iostream>
#include <string.h>

//Me oyes? Me sientes?
//JOOOOOOOSSSSSEEEEEEE

using namespace std;
 int opcion;
//funciones
void bienvenida(){
  cout<<"**************************************"<<endl;
  cout<<"*                                    *"<<endl;
  cout<<"* Bienvenidos al juego de refranes:  *"<<endl;
  cout<<"*                                    *"<<endl;
  cout<<"**************************************"<<endl;
  cout<<endl;
}

void menuDelPorgrama(){
   
  cout<<"**ESTAMOS LISTOS PARA EMPEZAR A JUGAR*"<<endl<<endl;
  cout<<"Ingrese el número de la opción que desee utilizar: "<<endl;
  cout<<"(1) Jugar a completar Refranes"<<endl <<"(2) Mostrar resultados anteriores"<< endl << "(3) Salir"<<endl;
  cout << "¿Cuál eliges?: "; cin >> opcion;
}

 void MostrarRefranIncompleto(){

   //Opción 1: Justar todos los refranes incompletos un un string 
   string respuesta;
   cout << "\n VAMOS CON LOS REFRANES! \n ";
   	string refranes[2] = {"Vamos a domar al Jose ", "La reina Chunga se pasa Nico se pasa"};
    for (int i = 0; i < 2; i++) {
    string refran = refranes[i];
    cout << refran.substr(0, 15) << "[...]" << endl;
    cout <<"Completa el refrán" << endl; cin >> respuesta;
    //string correcto = refran.substr(15, -1);
    //if (respuesta = correcto)){
      //cout << "OMG OMG OMG! GOOOOD!";
    //} 
 

      	
 }}

//comando principal
int main(){
bienvenida();
menuDelPorgrama();
  switch (opcion){
case 1: cout << "Usted ha seleccionado la opción 1"<< endl;MostrarRefranIncompleto();
    break;
    case 2: cout << "Usted ha seleccionado la opción 2";
    break;
    case 3: cout << "Usted ha seleccionado la opción 3";
    break;
    default: cout << "Usted ha ingresado una opción incorrecta";
  }
    
return 0;
}
}
