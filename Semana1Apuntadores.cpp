#include <iostream>
#include <string>

using namespace std;

int main(){

	/*Un apuntador es un tipo de variable que tiene nombre, direccion de 
	 memoria, dirrecion de la variable. El valor contiene una direccion */
	/*El apuntador contien un mapa de una direcion a otra direcion y esa 
	 direcion contiene una ArrayList u otra cosa y el ArrayList contiene 
	 los elementos*/
	/*La etique :NULL se escribe en mayuscula y NULL es una forma de decir 
	  0*/

	//Declarar un apuntador
	int* intPointer = NULL;

	//Instanciar un arreglo de 5 elementos
	intPointer = new int[5];

	cout<<"La direccion de la variable es con el signo de Ampersand: "
	      <<&intPointer<<endl<<
	      "La direccion de la variable es: "<<intPointer<<endl;
	
	//Garbage Collector
	/*delete libera espacio de la memoria, si no se libera esta queda
	guardada en la memoria de la computadora y hasta que no se reinicie
	la computadora la memoria no se libera*/

	//solo liberara un espacio de enteros
	delete intPointer; 
	
	//liberara el ArrayList
	delete [] intPointer;

	/*Una vez que liberemos la memoria es buena paractica de programacion
	que asignemons a la variable NULL o 0 que viene siendo la mismo
	cualquiera de los dos es valido*/

	intPointer = NULL;
}
