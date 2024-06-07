/* ***************************************************************************
AULA 018 - https://youtu.be/JLDuxLRjBK4?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #018 - Array / Vetor
Nesta aula iremos aprender sobre array também conhecido como vetor, vamos entender 
o funcionamento desta estrutura.
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
	// equivale a 5 variáveis em uma...
	int vetor[5]; // array/vetor

	// o indice controla a posição dentro do vetor...
	// inicia com o indice 0
	// inicialização...
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;
	vetor[4] = 50;
	// atenção ao tamanho de 5 elementos, inicia no 0 e termina no 4... 

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

	// boas práticas declarar no topo...
	const int tam = 9; // a variavel irá definir o tamanho fixo do array vetor1

	// declar e inicializa
	int vetor1[tam] = {100, 200, 300, 400, 500, 600, 700, 800, 900};

	cout << "\n\n";
	// for para mostrar os indices...
	for(int i = 0; i < tam;i++) { // melhora o controle dentro do for...
		cout << vetor1[i] << "\n";
	}

	cout << "\n\nFim do Programa!\n\n";

	return 0; // padrão não retorna nada...
}