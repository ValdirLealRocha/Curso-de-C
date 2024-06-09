/* ***************************************************************************
AULA 026 - https://youtu.be/KuipEEelnpU?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #026 - Resolu��o dos exerc�cios da aula 25
Nesta aula vamos ver a resolu��o do exerc�cio sobre recursividade 
proposto na aula 25, fatorial e fibonacci.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

// Prototipagem - Declara��o das fun��es
int fatorial(int n);
int fibonacci(int n);

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// MAIN() - Padr�o ANSI - fun��o principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// � um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar vari�vel
	int val, res;

	val = 8; // calcular o fatoria do numero inicial...
	res = fatorial(val);
	cout << "Fatorial de " << val << ": " << res;

	// Fibonacci
	cout << "\n\nFibinacci com " << val << " valores: ";
	for(int i = 0; i < val; i++) {
		cout << fibonacci(i + 1) << " ";
	}

	return 0; // padr�o n�o retorna nada...
}

// Fatorial 8 - 8! = 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 40320
int fatorial(int n) {
	if(n == 0) {
		return 1;
	}
	return n * fatorial(n - 1); // faria um loping se n�o ter recursividade
}

// Fibonacci - 1, 1, 2, 3, 5, 8, 13, 21, ...
int fibonacci(int n) {
	if(n == 1 || n == 2) {
		return 1;
	}else {
		return fibonacci(n - 1) + fibonacci(n - 2);// faria um loping se n�o ter recursividade
	}
}