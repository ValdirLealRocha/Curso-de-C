/* ***************************************************************************
AULA 026 - https://youtu.be/KuipEEelnpU?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #026 - Resolução dos exercícios da aula 25
Nesta aula vamos ver a resolução do exercício sobre recursividade 
proposto na aula 25, fatorial e fibonacci.
*/
// Biblioteca dos comandos básicos de entrada e saí­da.
#include <iostream> // não usa o ;

// Prototipagem - Declaração das funções
int fatorial(int n);
int fibonacci(int n);

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// MAIN() - Padrão ANSI - função principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// é um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar variável
	int val, res;

	val = 8; // calcular o fatoria do numero inicial...
	res = fatorial(val);
	cout << "Fatorial de " << val << ": " << res;

	// Fibonacci
	cout << "\n\nFibinacci com " << val << " valores: ";
	for(int i = 0; i < val; i++) {
		cout << fibonacci(i + 1) << " ";
	}

	return 0; // padrão não retorna nada...
}

// Fatorial 8 - 8! = 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 40320
int fatorial(int n) {
	if(n == 0) {
		return 1;
	}
	return n * fatorial(n - 1); // faria um loping se não ter recursividade
}

// Fibonacci - 1, 1, 2, 3, 5, 8, 13, 21, ...
int fibonacci(int n) {
	if(n == 1 || n == 2) {
		return 1;
	}else {
		return fibonacci(n - 1) + fibonacci(n - 2);// faria um loping se não ter recursividade
	}
}