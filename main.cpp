#include <iostream>
#include <string.h>

//Me oyes? Me sientes?
//JOOOOOOOSSSSSEEEEEEE

using namespace std;
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
  int opcion;
  cout<<"**ESTAMOS LISTOS PARA EMPEZAR A JUGAR*"<<endl<<endl;
  cout<<"Ingrese el número de la opción que desee utilizar: "<<endl;
  cout<<"(1) Jugar a completar Refranes"<<endl <<"(2) Mostrar resultados anteriores"<< endl << "(3) Salir"<<endl;
  cout << "¿Cuál eliges?: "; cin >> opcion;
}

 void MostrarRefranIncompleto(){

   //Opción 1: Justar todos los refranes incompletos un un string
   	string refranes[2] = {"Blue askf jfjfjf ", "La comida es "};
    for (int i = 0; i < 4; i++) 
		cout << refranes[i] << "\n"; 

     //Opción 2: Cada refrán en un string para poder imprimir la mitad y luego el refrán completo 
         string refran = "Yo Puedo domar al Jose :v";
    cout << refran.substr(1, 5) <<endl; 
	
 }

//comando principal
int main()
{
bienvenida();
menuDelPorgrama();
  if (opcion == "1")
    MostrarRefranIncompleto()
return 0;
}
