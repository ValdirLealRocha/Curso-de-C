/* ***************************************************************************
AULA 008 - https://youtu.be/H3fQYCGiwNE?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #008 - Invertendo valores de variáveis
Nesta aula iremos aprender como inverter valores em variáveis, positivos para negativos e vise e versa.
*/
// Biblioteca dos comandos básicos de entrada e saída.
#include <iostream> // não usa o ;

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Padrão ANSI - função principal
int main(){
	
	// declarar variável
	int num = 10;
	cout << num << "\n\n";

	// inverte o valor 10 para -10
	num = num * -1; // aqui altera a variavel num
	cout << num << "\n\n";

	num = 10;
	cout << -num << "\n\n"; // aqui não altera o conteudo da variavel...
	cout << num << "\n\n"; // aqui não altera o conteudo da variavel...

	// inverte o valor 10 para -10
	num = 10;
	num = -num; // aqui altera a variavel num na inversão do valor de num
	cout << num << "\n\n";

	return 0; // padrão não retorna nada...
}

