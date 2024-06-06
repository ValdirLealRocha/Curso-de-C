/* ***************************************************************************
AULA 010 - https://youtu.be/AiqG9UZoOLI?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #010 - Comando de decisão IF ELSE e comando Goto - Parte 2
Nesta aula iremos continuar o assunto sobre o comando IF ELSE e aprender também 
sobre o comando goto.
*/
// Biblioteca dos comandos básicos de entrada e saí­da.
#include <iostream> // não usa o ;

#include <locale.h> // definir localização para acentuar coeertamente...

#include <cstdlib> // permite executar comandos do terminal...

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Padrão ANSI - função principal
int main() {

	setlocale(LC_ALL, "Portuguese_Brazil"); 
	
	// declarar variável
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
	// >= 40 e < 60 Recuperação
	// > 40         Reprovado
	if(res >= 60) {
		cout << "\nAluno Aprovado\n\n";
	}else if(res >= 40) {
		cout << "\nAluno Recuperação\n\n";
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
	// >= 40 e < 60 Recuperação
	// > 40         Reprovado
	if(res >= 60) {
		cout << "\nAluno Aprovado\n\n";
	}else if(res >= 40) {
		cout << "\nAluno Recuperação\n\n";
	}else{
		cout << "\nAluno Reprovado\n\n";
	}

	// valida se retorna para o Goto...
	cout << "\nDigitar outras notas? [s/n]: ";
	cin >> opc;
	if((opc == 's') || (opc == 'S')) {
		goto inicio;
	}

	return 0; // padrão não retorna nada...
}