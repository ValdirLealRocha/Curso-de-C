/* ***************************************************************************
AULA 025 - https://youtu.be/KuipEEelnpU?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #025 - Funções recursivas (recursividade)
Nesta aula iremos aprender o que são funções recursivas, 
vamos entender como funciona recursividade em C++.
*/
// Biblioteca dos comandos básicos de entrada e saí­da.
#include <iostream> // não usa o ;

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Prototipagem / declaração da função
void contador1(int num);
void contador2(int num, int cont = 0); // recursiva e sobre carga

// MAIN() - Padrão ANSI - função principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// é um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar variável
	contador1(10);
	cout << "-----------------------\n\n";

	contador2(20);
	cout << "fim recursividade------\n\n";

	return 0; // padrão não retorna nada...
}

// escrever do zero até o valor informado...
void contador1(int num) {
	for(int i = 0; i <= num; i++) {
		cout << "Contador: " << i << "\n";
	}
}

// recursiva e sobre carga - escrever do zero até o valor informado...
void contador2(int num, int cont) {
	cout << "Contador: " << cont << "\n";
	if(num > cont) {
		contador2(num, ++cont); // recursividade...
	}
}
