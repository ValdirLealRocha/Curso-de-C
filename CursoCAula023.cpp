/* ***************************************************************************
AULA 023 - https://youtu.be/tPsc2WckHc4?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #023 - Sobrecarga de fun��es
Nesta aula iremos aprender um recurso quase que exclusivo de C++, 
que � a sobrecarga de fun��es, onde podemos ter duas ou mais fun��es 
com o mesmo nome.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// Declara��o da fun��o
void soma();
void soma(int n1, int n2);

// MAIN() - Padr�o ANSI - fun��o principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// � um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar vari�vel

	cout << "\ninicio da Soma\n";
	soma();
	cout << "\nfim da Soma\n\n";

	cout << "\ninicio da Soma sobre carga\n";
	soma(20, 30);
	cout << "\nfim da Soma sobre carga\n\n";

	return 0; // padr�o n�o retorna nada...
}

// somar dois valores e imprime o resultado
void soma() {
	int n1, n2, re;
	n1 = 10;
	n2 = 20;
	re = n1 + n2;
	cout << "Soma de " << n1 << " com " << n2 << " = " << re;
}

// somar dois valores e imprime o resultado - **** sobreposi��o ****
// sobreescrever / sobre carga de fun��o
void soma(int n1, int n2) {
	int re;
	n1 = n1;
	n2 = n2;
	re = n1 + n2;
	cout << "Sobre Carga - Soma de " << n1 << " com " << n2 << " = " << re;
}