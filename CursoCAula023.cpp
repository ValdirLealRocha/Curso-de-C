/* ***************************************************************************
AULA 023 - https://youtu.be/tPsc2WckHc4?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #023 - Sobrecarga de funções
Nesta aula iremos aprender um recurso quase que exclusivo de C++, 
que é a sobrecarga de funções, onde podemos ter duas ou mais funções 
com o mesmo nome.
*/
// Biblioteca dos comandos básicos de entrada e saí­da.
#include <iostream> // não usa o ;

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Declaração da função
void soma();
void soma(int n1, int n2);

// MAIN() - Padrão ANSI - função principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// é um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar variável

	cout << "\ninicio da Soma\n";
	soma();
	cout << "\nfim da Soma\n\n";

	cout << "\ninicio da Soma sobre carga\n";
	soma(20, 30);
	cout << "\nfim da Soma sobre carga\n\n";

	return 0; // padrão não retorna nada...
}

// somar dois valores e imprime o resultado
void soma() {
	int n1, n2, re;
	n1 = 10;
	n2 = 20;
	re = n1 + n2;
	cout << "Soma de " << n1 << " com " << n2 << " = " << re;
}

// somar dois valores e imprime o resultado - **** sobreposição ****
// sobreescrever / sobre carga de função
void soma(int n1, int n2) {
	int re;
	n1 = n1;
	n2 = n2;
	re = n1 + n2;
	cout << "Sobre Carga - Soma de " << n1 << " com " << n2 << " = " << re;
}