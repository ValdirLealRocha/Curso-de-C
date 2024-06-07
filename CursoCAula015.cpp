/* ***************************************************************************
AULA 015 - https://youtu.be/lzmelLr44WI?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #015 - Comando Break
Nesta aula iremos entender como interromper a sequ�ncia normal de um loop 
usando o comando break.
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

	cont = 0;

	while(cont < 1000) {
		cout << ++cont << "\n";
	// interrompe o la�o...
		if( cont == 500) {
			cout << "Break....\n";
			break;
		}
	}

	cout << "\nFim do Programa!";

	return 0; // padr�o n�o retorna nada...
}