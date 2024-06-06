/* ***************************************************************************
AULA 010 - https://youtu.be/AiqG9UZoOLI?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #010 - Comando de decis�o IF ELSE e comando Goto - Parte 2
Nesta aula iremos continuar o assunto sobre o comando IF ELSE e aprender tamb�m 
sobre o comando goto.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

#include <locale.h> // definir localiza��o para acentuar coeertamente...

#include <cstdlib> // permite executar comandos do terminal...

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// Padr�o ANSI - fun��o principal
int main() {

	setlocale(LC_ALL, "Portuguese_Brazil"); 
	
	// declarar vari�vel
	int n1, n2, res;
	char opc;

	// captura do teclado...
	cout << "\nDigite o valor da nota 1: ";
	cin >> n1;
	cout << "\nDigite o valor da nota 2: ";
	cin >> n2;

	res = n1 + n2;
	// valida notas
	if(res >= 60) {
		cout << "\nAluno Aprovado\n\n";
	}else{
		cout << "\nAluno Reprovado\n\n";
	}

	// captura do teclado...
	cout << "\nDigite o valor da nota 1: ";
	cin >> n1;
	cout << "\nDigite o valor da nota 2: ";
	cin >> n2;

	res = n1 + n2;
	// valida notas
	// >= 60        Aprovado
	// >= 40 e < 60 Recupera��o
	// > 40         Reprovado
	if(res >= 60) {
		cout << "\nAluno Aprovado\n\n";
	}else if(res >= 40) {
		cout << "\nAluno Recupera��o\n\n";
	}else{
		cout << "\nAluno Reprovado\n\n";
	}

	// Label para o Goto - ponto de parada inicial...
	inicio:

	// limpa a tela no terminal
	system("cls");

	// captura do teclado...
	cout << "\nDigite o valor da nota 1: ";
	cin >> n1;
	cout << "\nDigite o valor da nota 2: ";
	cin >> n2;

	res = n1 + n2;
	// valida notas
	// >= 60        Aprovado
	// >= 40 e < 60 Recupera��o
	// > 40         Reprovado
	if(res >= 60) {
		cout << "\nAluno Aprovado\n\n";
	}else if(res >= 40) {
		cout << "\nAluno Recupera��o\n\n";
	}else{
		cout << "\nAluno Reprovado\n\n";
	}

	// valida se retorna para o Goto...
	cout << "\nDigitar outras notas? [s/n]: ";
	cin >> opc;
	if((opc == 's') || (opc == 'S')) {
		goto inicio;
	}

	return 0; // padr�o n�o retorna nada...
}