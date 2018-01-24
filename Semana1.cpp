#include <iostream>
#include <string>

using namespace std;

int main(){
	int array[5];
	cout<<"Escriba el valor de cinco enteros" <<endl;

	for(int i =0; i<5;i++){
	cout<<"Ingrese el entero "<< i<<": " <<endl;
	cin>> array[i];
	}
	cout<<"los enteros leidos son: ";
	for(int i= 0;i < 5;i++){
		cout<< array[i] << " ";
	}
	return 0;
}

/*std es namespace e incluye objetos
el getline lee toda la linea, lee de la consola y cuando encuentra un salto delinea se detiene*/
