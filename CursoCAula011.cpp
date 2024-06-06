/* ***************************************************************************
AULA 011 - https://youtu.be/PMMRssEVfOo?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #011 - Operadores AND, OR, NOT
Nesta aula iremos aprender sobre os operadores l�gicos AND, OR e o operador NOT.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

#include <locale.h> // definir localiza��o para acentuar coeertamente...

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// Padr�o ANSI - fun��o principal
int main() {

	setlocale(LC_ALL, "Portuguese_Brazil"); 
	
	// declarar vari�vel
	int num;

	// AND -> && -> E
	// 1 - verdadeiro/true
	// 0 - falso/false
	// Operador l�gico onde o valor de resposta � verdadeiro se todas as 
	// vari�veis de entrada forem verdadeiras.
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
		cout << "\n\nN�o aceito\n";
	}

	// OR -> || -> OU
	// 1 - verdadeiro/true
	// 0 - falso/false
	// Operador l�gico onde o valor de resposta da opera��o � verdadeiro
	// se pelo menos uma das vari�veis de entrada for verdadeira.
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
		cout << "\n\nN�o aceito\n";
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
		cout << "\n\nN�o aceito\n";
	}

	// Operador ! not n�o
	// 1 - verdadeiro/true
	// 0 - falso/false
	num = 1;
	if(num) { // equivale a num � igual a 1 - verdadeiro
		cout << "\n\nVou ao clube\n";
	}else {
		cout << "\n\nVou ao cinema\n";
	}

	// nega��o - inverte o resultado do teste l�gico...
	if(!num) { // equivale a num � difrente de 1, ent�o num � 0 - falso
		cout << "\n\nVou ao clube\n";
	}else {
		cout << "\n\nVou ao cinema\n";
	}

	return 0; // padr�o n�o retorna nada...
}