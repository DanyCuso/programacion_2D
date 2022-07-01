/************************************************
 *               libreia Upy                    *
 *             by Daniel Valdes                 *
 *  agradecmeinto a Alonso por su ayuda para    *
 *         para entender el codigo              *
 *                                              *
 ************************************************/

#include	<iostream>
#include	<string>
#include	<cstring>
#include	<stdio.h>

using namespace std;

int	columns	= 2;
int	rows;

string	entry;
string	**matrix_pointer;
string	Title;
string	Author;
string	search;


void	intro();
void	requestData();
void	showData(string **);
void	deleteData(string **);

int main(){
	requestData();
	showData(matrix_pointer);
	deleteData(matrix_pointer);
	return 0;
}




void requestData(){
	cout << "\n\a\tCuatos libros quieres registrar ? ";
	getline(cin, entry);
	rows = stoi(entry);
	matrix_pointer = new string *[rows];

	for(int i = 0; i < rows; i++){
		matrix_pointer[i] = new string[columns];

		cout << "\n\t\tBook " << i + 1 << "\n"<< endl;
		cout << "\tTitle:\t ";
		getline(cin, Title);

		cout << "\tAuthor:\t ";
		getline(cin, Author);

		matrix_pointer[i][0] = Title;
		matrix_pointer[i][1] = Author;
	}
}

void showData(string **matrix_pointer){
	int counter = 0;
	cout << "\n\n\n\n\t ingresa la informacion de busqueda "<< endl;
	cout << "\n\tbuscar titulo: ";
	getline(cin, search);

	for (int i = 0; i < rows; i++){
		Title	=	matrix_pointer[i][0];
		Author 	=	matrix_pointer[i][1];
		if (strcasecmp(Title.c_str(), search.c_str()) == 0){
			counter++;
			cout << "\n\a\tLibro en existencia Titilo: " << Title << "  Autor: " << Author << "\n\n" << endl;
		}
	}
	if (counter == 0){
		cout << "\n\a\t El Titulo no esta en existencia , Finalizando programa...\n\n" << endl;
	}
}

void deleteData(string **matrix_pointer){
	for(int i = 0; i < rows; ++i){
		delete[] matrix_pointer[i];
	}
	delete[] matrix_pointer;
}