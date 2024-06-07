/* ***************************************************************************
AULA 014 - https://youtu.be/x8yF9nf5KrA?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #104 - Comando de la�o While
Nesta aula vamos aprender nosso primeiro la�o, o comando While, 
vamos entender o funcionamento desta estrutura de repeti��o (loop).
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
	int n;

	n = 0;
	// la�o de loop
	while(n < 10) { // modelo 1
		cout << n++ << "\n"; // o incremento vai validar a saida do la�o...
	}
	cout << "\nFim modelo 1\n\n";
	
	n = 0;
	// la�o de loop
	while(n < 10) { // modelo 2
		cout << n << "\n";
		cin >> n; // usu�rio informa um n�mero para validar no while e seguir ou finalizar...
	}
	cout << "\nFim modelo 2\n\n";

	int cont;
	cont = 20;
	// la�o de loop
	while(cont > 0) { // modelo 3
		cout << "Canal Fessor Bruno - " << cont << "\n";
		cont--;
	}
	cout << "\nFim modelo 3\n\n";

	cont = 0;
	// la�o de loop
	while(cont < 20) { // modelo 4
		cout << "Canal Fessor Bruno - " << cont << "\n";
		cont++;
	}
	cout << "\nFim modelo 4\n\n";

	cont = 0;
	// la�o de loop
	while(cont++ < 20) { // modelo 5
		cout << "Canal Fessor Bruno - " << cont << "\n";
	}
	cout << "\nFim modelo 5\n\n";

	cont = 0;
	// la�o de loop
	while(cont < 20) { // modelo 6
		cout << "Canal Fessor Bruno - " << cont << "\n";
		cont += 2;
		if (cont == 10) {
			cout << "\nFor�ado um Break...\n\n";
			break;
		}
	}
	cout << "\nFim modelo 6\n\n";

	cout << "\nRotina Executada!\n";

	return 0; // padr�o n�o retorna nada...
}