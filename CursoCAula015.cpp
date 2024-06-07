/* ***************************************************************************
AULA 015 - https://youtu.be/lzmelLr44WI?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #015 - Comando Break
Nesta aula iremos entender como interromper a sequência normal de um loop 
usando o comando break.
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
	int cont;

	cont = 0;

	while(cont < 1000) {
		cout << ++cont << "\n";
	// interrompe o laço...
		if( cont == 500) {
			cout << "Break....\n";
			break;
		}
	}

	cout << "\nFim do Programa!";

	return 0; // padrão não retorna nada...
}