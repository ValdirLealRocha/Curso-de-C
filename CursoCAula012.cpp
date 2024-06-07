/* ***************************************************************************
AULA 012 - https://youtu.be/mPA3pErt3TM?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #012 - Operador ternário
Nesta aula iremos aprender sobre o operador condicional IF Ternário, um teste condicional bastante simples.
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
	int n1, n2, nota;
	string res;

	// captura do teclado...
	cout << "\n\nDigite a primeira nota: ";
	cin >> n1;
	cout << "\n\nDigite a segunda nota: ";
	cin >> n2;

	nota = n1 + n2; // somatória

	// (expressao teste lógico) ? valor1 : valor2
	// >= 60      Aprovado
	// < 60       Reprovado
	(nota >= 60) ? res = "Aprovado" : res = "Reprovado"; // retorna string
	cout << "\nSituação do aluno 1: " << res << "\n\n";

	res = (nota >= 60) ? "Aprovado" : "Reprovado"; // retorna string
	cout << "\nSituação do aluno 2: " << res << "\n\n";

	// boa práticas, declarar var no topo
	int x;

	x = 5; // inicializção

	// captura do teclado...
	cout << "\n\nDigite um valor: ";
	cin >> n1;

	(n1 >= 5) ? x++ : x--; // retorna int, novo valor de x
	cout << "\nX = 5 - Novo valor de X: " << x << "\n\n";

	return 0; // padrão não retorna nada...
}