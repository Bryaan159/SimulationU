#include <iostream>
using namespace std;

int main(){
	
	int num = 5; //Declaramos una variable llamada "num" y ponemos el valor de 5
	int* ptr ; // Declaramos un puntero llamado "ptr" y le asignamos la direccion de memoria
  ptr = &num;
	
	cout << "Valor de num: " << num << endl; // Imprime el valor de "num"
  cout << "Dirección de num: " << &num << endl; // Imprime la dirección de "num"
  cout << "Valor de ptr: " << ptr << endl; // Imprime la dirección de "num", que es la misma que la de "ptr"
  cout << "Valor apuntado por ptr: " << *ptr << endl; // Imprime el valor de "num" a través de "ptr"

	*ptr = 10; // Modificamos el valor de "num" a través de "ptr"

  cout << "Nuevo valor de num: " << num << endl; // Imprime el nuevo valor de "num" para nuevo cambio

	return 0;
}