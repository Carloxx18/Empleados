#include <iostream>
#include <conio.h>

using namespace std;
int Funcion_suma(int x, int y);
struct Emple{
    int *codigo;
    string *nombre;
    string *apellido;
    string *puesto;

};

int main(){
    int emple_fila=0;
    int suma;
    int sueldo, boni=250;

    Emple emple;
    	cout<<	"-----------BIENVENIDO-----------"<<endl;
    	cout<<"Creado por: Carlos Andres De Leon Andrade"<<endl<<endl;
        cout<<"Cuantos Empleados Desea Ingresar: ";
        cin>>emple_fila;

    emple.codigo = new int[emple_fila];
       emple.nombre = new string[emple_fila];
       emple.apellido = new string[emple_fila];
      emple.puesto = new string[emple_fila];



cout<<"--------------Ingrese Datos--------------"<<endl;
string nombre;
for (int i=0;i<emple_fila;i++){
    cout<<"Codigo: ";
    cin>>emple.codigo[i];
    cin.ignore();
    cout<<"Nombre: ";
    getline(cin,emple.nombre[i]);
    cout<<"Apellido: ";
    getline(cin,emple.apellido[i]);
    cout<<"Puesto: ";
    getline(cin,emple.puesto[i]);
    cout<<"Sueldo: ";
    cin>>sueldo;
    cout<<"La bonificacion: "<<boni<<endl;

    cout<<"------------------------------------"<<endl;
};

    cout<<"--------------Mostrar Datos--------------"<<endl;
for (int i=0;i<emple_fila;i++){
    cout<<"Codigo: "<<emple.codigo[i]<<"."<<endl;
    cout<<"Nombre: "<<emple.nombre[i]<<"."<<endl;
    cout<<"Apellios: "<<emple.apellido[i]<<"."<<endl;
    cout<<"Puesto: "<<emple.puesto[i]<<"."<<endl;
    cout<<"Sueldo: "<<sueldo<<endl;
    cout<<"Bonificacion: "<<boni<<endl;
    suma = Funcion_suma(sueldo, boni);
    cout<<"La suma de la bonificacion es: "<<suma <<endl;
    cout<<endl;
    }
        cout<<"------------------------------------"<<endl;


for (int i=0;i<emple_fila;i++)

delete[] emple.codigo;
delete[] emple.nombre;
delete[] emple.apellido;
delete[] emple.puesto;

    system("PAUSE");
    return 0;

}
int Funcion_suma(int x, int y){
    int res;
    res=y+x;

    return res;
}
