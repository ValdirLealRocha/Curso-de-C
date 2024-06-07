/* ***************************************************************************
AULA 018 - https://youtu.be/JLDuxLRjBK4?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #018 - Array / Vetor
Nesta aula iremos aprender sobre array tamb�m conhecido como vetor, vamos entender 
o funcionamento desta estrutura.
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
	// equivale a 5 vari�veis em uma...
	int vetor[5]; // array/vetor

	// o indice controla a posi��o dentro do vetor...
	// inicia com o indice 0
	// inicializa��o...
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;
	vetor[4] = 50;
	// aten��o ao tamanho de 5 elementos, inicia no 0 e termina no 4... 

	cout << "\n\n";
	// mostra o indice do vetoir...
	cout << vetor[0] << "\n";
	cout << vetor[4] << "\n\n";

	cout << "\n\n";
	// for para mostrar os indices...
	for(int i = 0; i < 5;i++) {
		cout << vetor[i] << "\n";
	}

	cout << "\n\n";
	// for para mostrar os indices...
	for(int i = 0; (i < (sizeof(vetor)/4));i++) {
		cout << vetor[i] << "\n";
	}

	// boas pr�ticas declarar no topo...
	const int tam = 9; // a variavel ir� definir o tamanho fixo do array vetor1

	// declar e inicializa
	int vetor1[tam] = {100, 200, 300, 400, 500, 600, 700, 800, 900};

	cout << "\n\n";
	// for para mostrar os indices...
	for(int i = 0; i < tam;i++) { // melhora o controle dentro do for...
		cout << vetor1[i] << "\n";
	}

	cout << "\n\nFim do Programa!\n\n";

	return 0; // padr�o n�o retorna nada...
}