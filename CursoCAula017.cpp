/* ***************************************************************************
AULA 017 - https://youtu.be/lzmelLr44WI?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #017 - Comando de loop FOR
Nesta aula de C++ vamos aprender sobre o Loop FOR.
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
	int x;

	// for laço para listas, arrays, vetores, matrizes...
	// forma básica...
	for(x = 0; x <= 10;x++) {
		cout << x << "\n";
	}

	// boas práticas de declaração no topo...
	int y;

	// for laço para listas, arrays, vetores, matrizes...
	// forma básica...
	for(x = 0, y = 1; x <= 10;x++, y+=2) {
		cout << x << " - " << y << "\n";
	}

	// boas práticas de declaração no topo...
	int z;

	// for laço para listas, arrays, vetores, matrizes...
	// forma básica...
	for(x = 0, y = 1, z = 0; x <= 10;x++, y += 2, z += 2) {
		cout << x << " - ";
		cout << y << " - ";
		cout << z << "\n";
	}

	// for laço para listas, arrays, vetores, matrizes...
	// forma básica...
	for(x = 0, y = 1, z = 0; (x <= 10) && (z <= 6);x++, y += 2, z += 2) {
		cout << x << " - ";
		cout << y << " - ";
		cout << z << "\n";
	}

	// for laço para listas, arrays, vetores, matrizes...
	// forma básica...
	for(int n = 0; n <= 10;n++) {
		cout << n << "\n";
	}

	//este for não é comumente utilizado, veja um exemplo...
	cout << "\nFor executando sem bloco de comandos...\n";
	for(int tmp= 0; tmp < 1000000000; tmp++);

	cout << "\n\nFim do Programa!" << "\n\n";

	return 0; // padrão não retorna nada...
}