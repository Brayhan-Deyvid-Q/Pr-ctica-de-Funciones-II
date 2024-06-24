/*	Ejercicio 1: Cálculo del Área de un Círculo: Implementa un programa que calcule el área de un círculo dado su
radio. Utiliza la constante M_PI de la librería cmath para obtener el valor de pi. Solicita al usuario el
radio del círculo y utiliza la función pow de cmath para calcular el cuadrado del radio. Muestra el
resultado del área calculada.*/

#include<iostream>
#include<cmath>
#include<windows.h>

using namespace std;
int main (){
	
	double rd, ar_c;
	SetConsoleOutputCP(CP_UTF8);
	
	cout << "\n --- BIENVENIDO AL PROGRAMA QUE CALCULA EL ÁREA DE UN CÍRCULO ---" << endl;

	cout << "Ingrese el valor del radio del círculo: ";
	cin >> rd;

	ar_c = M_PI*pow(rd, 2);

	cout << "El área del cículo es: " << ar_c << endl;

	return 0;
}
