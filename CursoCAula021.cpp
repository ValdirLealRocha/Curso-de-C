/* ***************************************************************************
AULA 021 - https://youtu.be/QilaiaDY94w?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #021 - Argumentos para a fun��o main, argc e argv
Nesta aula iremos aprender como usar os argumentos argc e argv da fun��o main, 
basicamente a passar par�metros ao programa na chamada ou pela linha de comando.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;
#include <locale.h> // definir localiza��o para acentuar coeertamente...
#include <string.h> // para comparar strings...
#include <stdlib.h> // usar comandos na linha do terminal...

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// Padr�o ANSI - fun��o principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// � um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main(int argc, char *argv[]) {

	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar vari�vel

	// primeiro parametro... im plicito "nome do programa" padr�o copmpilador...
	// cout << argc << "\n\n";
	// cout << argv[0] << "\n\n";
	// cout << argv[1] << "\n\n";
	// cout << argv[2] << "\n\n";
	// cout << argv[3] << "\n\n";

	// verificar se tem parametros da linha de comando...
	if(argc > 1) {
		// adicionamos uma biblioteca no topo <string.h> 
		// para podermos comparar strings...
		// usando o operador de nega��o !
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

	return 0; // padr�o n�o retorna nada...
}