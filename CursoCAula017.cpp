/* ***************************************************************************
AULA 017 - https://youtu.be/lzmelLr44WI?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #017 - Comando de loop FOR
Nesta aula de C++ vamos aprender sobre o Loop FOR.
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
	int x;

	// for la�o para listas, arrays, vetores, matrizes...
	// forma b�sica...
	for(x = 0; x <= 10;x++) {
		cout << x << "\n";
	}

	// boas pr�ticas de declara��o no topo...
	int y;

	// for la�o para listas, arrays, vetores, matrizes...
	// forma b�sica...
	for(x = 0, y = 1; x <= 10;x++, y+=2) {
		cout << x << " - " << y << "\n";
	}

	// boas pr�ticas de declara��o no topo...
	int z;

	// for la�o para listas, arrays, vetores, matrizes...
	// forma b�sica...
	for(x = 0, y = 1, z = 0; x <= 10;x++, y += 2, z += 2) {
		cout << x << " - ";
		cout << y << " - ";
		cout << z << "\n";
	}

	// for la�o para listas, arrays, vetores, matrizes...
	// forma b�sica...
	for(x = 0, y = 1, z = 0; (x <= 10) && (z <= 6);x++, y += 2, z += 2) {
		cout << x << " - ";
		cout << y << " - ";
		cout << z << "\n";
	}

	// for la�o para listas, arrays, vetores, matrizes...
	// forma b�sica...
	for(int n = 0; n <= 10;n++) {
		cout << n << "\n";
	}

	//este for n�o � comumente utilizado, veja um exemplo...
	cout << "\nFor executando sem bloco de comandos...\n";
	for(int tmp= 0; tmp < 1000000000; tmp++);

	cout << "\n\nFim do Programa!" << "\n\n";

	return 0; // padr�o n�o retorna nada...
}