/* ***************************************************************************
AULA 024 - https://youtu.be/cIZLMjlgmbU?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #024 - Omiss�o de argumentos e argumentos padr�o
Nesta aula iremos aprender um pouco mais sobre fun��es e seus argumentos, 
iremos aprender como omitir um argumento e declarar argumentos com valor padr�o.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// Prototipar
void imp(string txt = "CFB Cursos"); // na declara��o da fun��o passo um parametro padr�o...

// MAIN() - Padr�o ANSI - fun��o principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// � um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar vari�vel
	imp("Bruno"); // informo uma informa��o
	imp();        // omiti argumento e imprime a informa��o padr�o...

	return 0; // padr�o n�o retorna nada...
}

// mostra dados na tela
void imp(string txt) {
	cout << "\n" << txt << "\n";
}
