/* ***************************************************************************
AULA 011 - https://youtu.be/PMMRssEVfOo?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #011 - Operadores AND, OR, NOT
Nesta aula iremos aprender sobre os operadores lógicos AND, OR e o operador NOT.
*/
// Biblioteca dos comandos básicos de entrada e saí­da.
#include <iostream> // não usa o ;

#include <locale.h> // definir localização para acentuar coeertamente...

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Padrão ANSI - função principal
int main() {

	setlocale(LC_ALL, "Portuguese_Brazil"); 
	
	// declarar variável
	int num;

	// AND -> && -> E
	// 1 - verdadeiro/true
	// 0 - falso/false
	// Operador lógico onde o valor de resposta é verdadeiro se todas as 
	// variáveis de entrada forem verdadeiras.
	// x1	x2	x1 AND x2
	// 0  0      0
	// 0  1      0
	// 1  0      0
	// 1  1      1

	// 1 2 3 4 5 6 7 8 9 10
	// > 4 e < 7
	//num = 8;
	num = 5;
	if(num > 4 && num < 7) {
		cout << "\n\nValor aceito\n";
	}else {
		cout << "\n\nNão aceito\n";
	}

	// OR -> || -> OU
	// 1 - verdadeiro/true
	// 0 - falso/false
	// Operador lógico onde o valor de resposta da operação é verdadeiro
	// se pelo menos uma das variáveis de entrada for verdadeira.
	// x1	x2	x1 AND x2
	// 0  0      0
	// 0  1      1
	// 1  0      1
	// 1  1      1

	// 1 2 3 4 5 6 7 8 9 10
	// < 3 ou > 8
	//num = 5;
	num = 9;
	if(num < 3 || num > 8) {
		cout << "\n\nValor aceito\n";
	}else {
		cout << "\n\nNão aceito\n";
	}

	// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
	// 3 a 6
	// 10 a 14
	// 16 a 19
	// num = 5; // teste 1
	num = 7; // teste 2
	if((num >= 3 && num <= 6) || (num > 9 && num < 15) || (num > 15 && num < 20)) {
		cout << "\n\nValor aceito\n";
	}else {
		cout << "\n\nNão aceito\n";
	}

	// Operador ! not não
	// 1 - verdadeiro/true
	// 0 - falso/false
	num = 1;
	if(num) { // equivale a num é igual a 1 - verdadeiro
		cout << "\n\nVou ao clube\n";
	}else {
		cout << "\n\nVou ao cinema\n";
	}

	// negação - inverte o resultado do teste lógico...
	if(!num) { // equivale a num é difrente de 1, então num é 0 - falso
		cout << "\n\nVou ao clube\n";
	}else {
		cout << "\n\nVou ao cinema\n";
	}

	return 0; // padrão não retorna nada...
}