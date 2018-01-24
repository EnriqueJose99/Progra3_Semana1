#include <iostream>

#include <string>

using namespace std;

//suma de dos enteros que recibe de parametro
int suma(int a, int b){
	return a + b;
}


//prototipo de una funcion
int resta(int, int);


int main(){
	//una funcion retorna algo y el procedimiento hace algo
	//Metodo es una funcion o procedimiento, es un bloque de codigo que realiza una tarea, 
	//procedimiento no retorna nada es void, y una funcion retorna algo
   	//Practica de programacion es documentar las funciones "DOCUMENTAR EL CODIGO"	
	//A diferencia de java, c++ es un compilador de una solo pasada quiere decir que lee secuencial, entonces
	//no lee la funcion si esta debajo del main.
	//en c++ es unico que se pueda hacer un prototipo de una funcion
	int num1;
	int num2;
	cout<<"Ingrese numero 1 " <<endl;
	cin>> num1;
	cout<< "Ingrese numero 2 " << endl;
	cin>> num2;
	cout<< "El resulta de la suma de los dos entero es: " << suma(num1, num2)<<endl;
	
	int numR;
	int numR1;
	cout<<"Ingrese numero 1 " <<endl;
	cin>> numR;
	cout<< "Ingrese numero 2 " << endl;
	cin>> numR1;
	cout<< "El resulta de la suma de los dos entero es: " << resta(numR, numR1)<<endl;
	return 0;

}

//Aqui encuentra el espacion que dejo en resta, prototipo de resta
int resta(int a1, int b1){
	return a1 - b1;
}


