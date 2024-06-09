/* ***************************************************************************
AULA 029 - https://youtu.be/mGLtyCOJe4A?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #029 - Pilha / Stack - Parte 2
Nesta aula vamos aprender o m�todo empty e finalizar o assunto de pilhas/stack
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;
#include <stack> // trabalhar com pilha...

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// MAIN() - Padr�o ANSI - fun��o principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// � um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar vari�vel
	// FIFO - First In - First Out = O primeiro a entrar ser� o �ltim o a sair...
	stack <string> cartas; // pilha... 

	// verifica se a pilha est� vazia... .empty()
	if(cartas.empty()) {
		cout << "Pilha est� vazia...\n\n";
	}else {
		cout << "Pilha com Cartas...\n\n";
	}

	// verifica se a pilha est� vazia... .size() == 0
	if(cartas.size() == 0) {
		cout << "Pilha est� vazia...\n\n";
	}else {
		cout << "Pilha com Cartas...\n\n";
	}

	// .push - adiciona elementos na pilha...
	cout << "Adiciona elementos � pilha...\n\n";
	cartas.push("Rei de copas");   // 1
	cartas.push("Rei de espadas"); // 2
	cartas.push("Rei de ouros");   // 3
	cartas.push("Rei de paus");    // 4
	// tamanho da pilha...
	cout << "Tamanho da pilha: " << cartas.size() << "\n\n";

	// verifica se a pilha est� vazia...
	if(cartas.empty()) {
		cout << "Pilha est� vazia...\n\n";
	}else {
		cout << "Pilha com Cartas...\n\n";
	}

	// tamanho da pilha...
	cout << "Tamanho da pilha: " << cartas.size() << "\n\n";

	// Imprime o elemento do topo da pilha...
	cout << "Carta do topo: " << cartas.top() << "\n";
	// -----------------------------------------------------
	// .pop - remove o elemento do topo na pilha...
	cout << "Removeu uma Carta do topo: " << cartas.top() << "\n";
	cartas.pop(); // retira/remove o �ltimo elemento que entrou na pilha...
	// tamanho da pilha...
	cout << "Tamanho da pilha: " << cartas.size() << "\n\n";
	// Imprime o elemento do topo da pilha...
	cout << "Nova Carta do topo: " << cartas.top() << "\n";
	// -----------------------------------------------------
	cout << "Removeu uma Carta do topo: " << cartas.top() << "\n";
	cartas.pop(); // retira/remove o �ltimo elemento que entrou na pilha...
	// tamanho da pilha...
	cout << "Tamanho da pilha: " << cartas.size() << "\n\n";
	// Imprime o elemento do topo da pilha...
	cout << "Nova Carta do topo: " << cartas.top() << "\n";
	// -----------------------------------------------------

	// limpar a pilha...
	while(!cartas.empty()) {
		cartas.pop();
	}
	// tamanho da pilha...
	cout << "\nLimpou a pilha: " << "\n\n";

	// tamanho da pilha...
	cout << "\nTamanho ATUAL da pilha de Cartas: " << cartas.size() << "\n\n";

	return 0; // padr�o n�o retorna nada...
}