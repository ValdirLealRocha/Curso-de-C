/* ***************************************************************************
AULA 025 - https://youtu.be/KuipEEelnpU?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #025 - Fun��es recursivas (recursividade)
Nesta aula iremos aprender o que s�o fun��es recursivas, 
vamos entender como funciona recursividade em C++.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// Prototipagem / declara��o da fun��o
void contador1(int num);
void contador2(int num, int cont = 0); // recursiva e sobre carga

// MAIN() - Padr�o ANSI - fun��o principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// � um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar vari�vel
	contador1(10);
	cout << "-----------------------\n\n";

	contador2(20);
	cout << "fim recursividade------\n\n";

	return 0; // padr�o n�o retorna nada...
}

// escrever do zero at� o valor informado...
void contador1(int num) {
	for(int i = 0; i <= num; i++) {
		cout << "Contador: " << i << "\n";
	}
}

// recursiva e sobre carga - escrever do zero at� o valor informado...
void contador2(int num, int cont) {
	cout << "Contador: " << cont << "\n";
	if(num > cont) {
		contador2(num, ++cont); // recursividade...
	}
}
