/* ***************************************************************************
AULA 030 - https://youtu.be/kPy95qTGVrY?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #030 - Fila / Queue
Nesta aula vamos aprender sobre a estrutura fila / queue, declarar, 
inserir e remover itens e fazer a leitura destes itens.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;
#include <queue> // para trabalhar com filas...

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// MAIN() - Padr�o ANSI - fun��o principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// � um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar vari�vel

	/*
	empty
	size
	front
	back
	push
	pop
	*/

	// declara uma FILA...
	queue <string> cartas;

	// inserir elementos dentro da fila...
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");

	// mostra o tamanho da fila...
	cout << "Tamanho da FILA: " << cartas.size() << "\n\n";

	// mostra as pontas da fila...
	cout << "Primeira Carta: " << cartas.front() << "\n";
	cout << "�ltima Carta..: " << cartas.back() << "\n\n";

	// remove os elementos da fila...
	while(!cartas.empty()) {
		cout << "Primeira Carta: " << cartas.front() << "\n";
		cartas.pop(); // remone o elemento da fila...
	}

	return 0; // padr�o n�o retorna nada...
}