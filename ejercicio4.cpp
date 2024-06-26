/*Crea un programa que calcule las raíces de una
ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a,b,c;
	double x1,x2, Xreal, Ximaginaria;
	double d;
	cout<<"Ingrese los valores de los coeficientes: "<<endl;
	cout<< "a= ";
	cin>>a;
	cout<< "b= ";
	cin>>b;
	cout<< "c= ";
	cin>>c;
	
	d=pow(b,2)-4*a*c;
	if (d>0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		cout<<"Las raices son:"<<endl;
		cout<<"x1= "<<x1<<endl;
		cout<<"x2= "<<x2<<endl;
	}else{
		if(d==0){
			cout<<"Las raices son iguales: "<<endl;
			x1=-b/(2*a);
			cout<<"x= "<<x1<<endl;
		}else{
			cout<<"La raiz es compleja: "<<endl;
			Xreal=-b/(2*a);
			Ximaginaria=sqrt(-d/(2*a));
			cout<<Xreal<< " + "<<Ximaginaria<< " i "<<endl;
			cout<<Ximaginaria<< " - "<<Ximaginaria<< " i "<<endl;
		}
	}
	return 0;
}