/* ***************************************************************************
AULA 014 - https://youtu.be/x8yF9nf5KrA?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #104 - Comando de laço While
Nesta aula vamos aprender nosso primeiro laço, o comando While, 
vamos entender o funcionamento desta estrutura de repetição (loop).
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
	int n;

	n = 0;
	// laço de loop
	while(n < 10) { // modelo 1
		cout << n++ << "\n"; // o incremento vai validar a saida do laço...
	}
	cout << "\nFim modelo 1\n\n";
	
	n = 0;
	// laço de loop
	while(n < 10) { // modelo 2
		cout << n << "\n";
		cin >> n; // usuário informa um número para validar no while e seguir ou finalizar...
	}
	cout << "\nFim modelo 2\n\n";

	int cont;
	cont = 20;
	// laço de loop
	while(cont > 0) { // modelo 3
		cout << "Canal Fessor Bruno - " << cont << "\n";
		cont--;
	}
	cout << "\nFim modelo 3\n\n";

	cont = 0;
	// laço de loop
	while(cont < 20) { // modelo 4
		cout << "Canal Fessor Bruno - " << cont << "\n";
		cont++;
	}
	cout << "\nFim modelo 4\n\n";

	cont = 0;
	// laço de loop
	while(cont++ < 20) { // modelo 5
		cout << "Canal Fessor Bruno - " << cont << "\n";
	}
	cout << "\nFim modelo 5\n\n";

	cont = 0;
	// laço de loop
	while(cont < 20) { // modelo 6
		cout << "Canal Fessor Bruno - " << cont << "\n";
		cont += 2;
		if (cont == 10) {
			cout << "\nForçado um Break...\n\n";
			break;
		}
	}
	cout << "\nFim modelo 6\n\n";

	cout << "\nRotina Executada!\n";

	return 0; // padrão não retorna nada...
}