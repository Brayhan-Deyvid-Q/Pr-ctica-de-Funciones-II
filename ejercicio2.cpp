/*Crea un programa que genere y muestre una serie de números
aleatorios entre 0 y un número máximo especificado por el usuario. El programa solicitará al usuario
la cantidad de números aleatorios que desea generar y el valor máximo permitido. Utiliza la función
rand de la librería cstdlib para generar los números aleatorios.*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;

int main(){
	srand(time(0));
	int numAlea, num_max, cant_num;
	SetConsoleOutputCP(CP_UTF8);
	
	cout<< "Ingrese la cantidad de números aleatorios a generar: ";
	cin>>cant_num;
	cout<< "Ingrese el máximo valor permitido para generar los números: ";
	cin>>num_max;
	cout<< "Los números correspondientes son: "<<endl;
	
	for(int i=0; i<num_max ; i++){
		numAlea=rand() % num_max+1;
		cout<<numAlea<<endl;
	}
	
	return 0;
}