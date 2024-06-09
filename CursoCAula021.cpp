/* ***************************************************************************
AULA 021 - https://youtu.be/QilaiaDY94w?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #021 - Argumentos para a função main, argc e argv
Nesta aula iremos aprender como usar os argumentos argc e argv da função main, 
basicamente a passar parâmetros ao programa na chamada ou pela linha de comando.
*/
// Biblioteca dos comandos básicos de entrada e saí­da.
#include <iostream> // não usa o ;
#include <locale.h> // definir localização para acentuar coeertamente...
#include <string.h> // para comparar strings...
#include <stdlib.h> // usar comandos na linha do terminal...

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Padrão ANSI - função principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// é um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main(int argc, char *argv[]) {

	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar variável

	// primeiro parametro... im plicito "nome do programa" padrão copmpilador...
	// cout << argc << "\n\n";
	// cout << argv[0] << "\n\n";
	// cout << argv[1] << "\n\n";
	// cout << argv[2] << "\n\n";
	// cout << argv[3] << "\n\n";

	// verificar se tem parametros da linha de comando...
	if(argc > 1) {
		// adicionamos uma biblioteca no topo <string.h> 
		// para podermos comparar strings...
		// usando o operador de negação !
		if(!strcmp(argv[1], "sol")) {
				cout << "\n\nVou ao Clube.\n\n";
		}else if(!strcmp(argv[1], "nublado")) {
			cout << "\n\nVou ao Cinema.\n\n";
		}else {
			cout << "\n\nVou Ficar em Casa!\n\n";
		}
	}

	// adicionamos outra biblioteca <stdlib.h>
	system("pause");

	return 0; // padrão não retorna nada...
}