/* ***************************************************************************
AULA 008 - https://youtu.be/H3fQYCGiwNE?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #008 - Invertendo valores de vari�veis
Nesta aula iremos aprender como inverter valores em vari�veis, positivos para negativos e vise e versa.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// Padr�o ANSI - fun��o principal
int main(){
	
	// declarar vari�vel
	int num = 10;
	cout << num << "\n\n";

	// inverte o valor 10 para -10
	num = num * -1; // aqui altera a variavel num
	cout << num << "\n\n";

	num = 10;
	cout << -num << "\n\n"; // aqui n�o altera o conteudo da variavel...
	cout << num << "\n\n"; // aqui n�o altera o conteudo da variavel...

	// inverte o valor 10 para -10
	num = 10;
	num = -num; // aqui altera a variavel num na invers�o do valor de num
	cout << num << "\n\n";

	return 0; // padr�o n�o retorna nada...
}

