#include <iostream>
#include <string>

using namespace std;

int main(){
	/*std es namespace e incluye objetos
	el getline lee toda la linea, lee de la consola y cuando encuentra un salto 
	de linea se detiene*/

	/*int array[5];
	cout<<"Escriba el valor de cinco enteros" <<endl;

	for(int i =0; i<5;i++){
	cout<<"Ingrese el entero "<< i<<": " <<endl;
	cin>> array[i];
	}
	cout<<"los enteros leidos son: ";
	for(int i= 0;i < 5;i++){
		cout<< array[i] << " ";
	}
	return 0;*/

	/*Tipos de Datos enteros en java y c++ int, long, short, byte, en c++ ha y dos mas que son el char y bool*/
	
	/*int num = 'a';//casteo implicito
	char letra = 70;//casteo implicito
	cout<<"Numero: "<< num <<endl << "Char: "<< letra <<endl;*/
	

	
	//el booleano solo es falso cuando es 0 
	//toda operacion "if" return algo "el valor que le asigno a la variable"
	//Mucho cuidado por que el compilador de c++ no mira la logica de comparar o asignar
	
	bool condition = true;
	if(condition){
		cout<<"Verdadero"<< endl;
	}else{ 
	        cout<<"False"<< endl;
	}

}
