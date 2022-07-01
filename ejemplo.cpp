#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	int cols = 2; //El numero de la columna
	string** libros; //Inicializando la matriz con punteros
	
	int size; //Inicializando el tamaño de la variable
	cout <<"Cuantos libros desea ingresar?";
	
	string entrada; //Declaro la variable entrada
	
	getline (cin, entrada);//Se asigna el valor ingresado
	
	size = stoi (entrada);//transformar la entrada "string" o "entero"
	
	libros = new string*[size]; //asignar el numero de filas según el usuario
	
	cout << "Ingrese la información de los libros: \n";
	string titulo, autor;
	
	for(int i=0; i<size; i++){
		
		libros [i] = new string [cols];
		cout<<"\n**Libro"<< i+1<<"**\n";
		cout<<"Titulo: ";
		getline(cin, titulo);//se asignan el valor ingresado a la posición de la matriz
		cout<<"Autors: ";
		getline(cin, autor);
		libros[i][0] = titulo; //Se asignan el valor ingresado a la posición de la matriz
		libros[i][1] = autor;
	}
	
	//Liberar la memoria debemos recorrer el array fila por fila
	for (int i = 0; i<size; i++){
		delete [] libros[i];
	} //cada fila de libros es otro array
	delete[] libros;
	
	//cout<<str[i][0]<<''<<*pc<<''<<pc[i][1]<<"\n";
	
	system ("pause");
	
	return 0;
	
	}