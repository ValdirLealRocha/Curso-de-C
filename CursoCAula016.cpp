/* ***************************************************************************
AULA 016 - https://youtu.be/lzmelLr44WI?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #016 - Comando de loop Do While
Nesta aula iremos aprender nosso segundo loop, o comando do while, 
uma simples varia��o do loop while que garante a execu��o do bloco de 
comandos pelo menos uma vez, mesmo que a condi��o para o loop j� tenha 
iniciada satisfeita.
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
	int cont;

	// inicializa��o
	cont = 20;

	// while avalia no inicio do looping
	// do while avalia no fim da primeira execu��o do looping
	// este la�o ir� executar o bloco de comando um vez independente da compara��o/opera��o...
	do {
		cout << "\nCanal Fessro Bruno - " << cont++ << "\n";
	} while (cont < 20);
	
	// mensagem
	cout << "\nFim do Programa!";

	return 0; // padr�o n�o retorna nada...
}