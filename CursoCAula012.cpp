/* ***************************************************************************
AULA 012 - https://youtu.be/mPA3pErt3TM?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #012 - Operador tern�rio
Nesta aula iremos aprender sobre o operador condicional IF Tern�rio, um teste condicional bastante simples.
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
	int n1, n2, nota;
	string res;

	// captura do teclado...
	cout << "\n\nDigite a primeira nota: ";
	cin >> n1;
	cout << "\n\nDigite a segunda nota: ";
	cin >> n2;

	nota = n1 + n2; // somat�ria

	// (expressao teste l�gico) ? valor1 : valor2
	// >= 60      Aprovado
	// < 60       Reprovado
	(nota >= 60) ? res = "Aprovado" : res = "Reprovado"; // retorna string
	cout << "\nSitua��o do aluno 1: " << res << "\n\n";

	res = (nota >= 60) ? "Aprovado" : "Reprovado"; // retorna string
	cout << "\nSitua��o do aluno 2: " << res << "\n\n";

	// boa pr�ticas, declarar var no topo
	int x;

	x = 5; // inicializ��o

	// captura do teclado...
	cout << "\n\nDigite um valor: ";
	cin >> n1;

	(n1 >= 5) ? x++ : x--; // retorna int, novo valor de x
	cout << "\nX = 5 - Novo valor de X: " << x << "\n\n";

	return 0; // padr�o n�o retorna nada...
}