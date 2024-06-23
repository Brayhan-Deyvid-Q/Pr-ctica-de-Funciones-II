#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int main (){
	double radio, area_circulo;
	SetConsoleOutputCP(CP_UTF8);
	cout<<"Ingrese el valor del radio del círculo: ";
	cin>>radio;
	area_circulo= M_PI*pow(radio, 2);
	cout<< "El área del cículo es: "<<area_circulo<<endl;
	return 0;
}
