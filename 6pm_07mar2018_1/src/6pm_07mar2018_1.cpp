//============================================================================
// Name        : 6pm_07mar2018_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "libs/Operaciones.h"
using namespace std;
using namespace principal2;

int main() {
	int resultado = 0;
	int num1 = 0;
	int num2 = 0;
	char cadena[16] = "";

	cout<<"Ingrese num1: ";
	cin>>num1;

	cin.ignore();

	cout<<"Ingrese Cadena: ";
	cin.getline(cadena,16);

	cout<<"El num1 fue: "<<num1;
	cout<<"la cadena entrada fue: "<<cadena<<endl;

//	cout<<"Ingrese num1: ";
//	cin>>num1;
//
//	cout<<"Ingrese num2: ";
//	cin>>num2;
//
//	resultado = suma(num1,num2);
//	cout<<"La suma es: "<<resultado<<endl;

	return 0;
}
