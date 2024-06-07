/* ***************************************************************************
AULA 019 - https://youtu.be/_KRI19Acxww?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #019 - Array bidimensional / Matriz
Nesta aula iremos aprender sobre matriz que é um array bidimensional, 
vamos aprender como declarar e utilizar essa estrutura de variáveis.
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
	// 3 Linhas e 4 Colunas
	// matriz[3][4]
	//     0    1    2    3
	// 0   5
	// 1             5
	// 2   5
	//
	// matriz[0][0] = 5
	// matriz[1][2] = 5
	// matriz[2][1] = 5
	// Matriz/Vetor - array multidimencionais - array de array - vetor de vetor
	int matriz[3][4];
	int l, c; // Linha e Coluna

	// inicialização
	matriz[0][0] = 0;
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[0][3] = 0;

	matriz[1][0] = 1;
	matriz[1][1] = 1;
	matriz[1][2] = 1;
	matriz[1][3] = 1;

	matriz[2][0] = 2;
	matriz[2][1] = 2;
	matriz[2][2] = 2;
	matriz[2][3] = 2;

	// um for pra cada dimensão...
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 4; c++) {
			cout << matriz[l][c] << " ";
		}
		cout << "\n";
	}

	cout << "\n\n\n inicializa pelo for...";

	// inicialização com FOR
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 4; c++) {
			matriz[l][c] = l;
		}
	}

	// um for pra cada dimensão...
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 4; c++) {
			cout << matriz[l][c] << " ";
		}
		cout << "\n";
	}

	cout << "\n\n\n inicializa pelo teclado...\n\n";

	// inicialização com FOR
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 4; c++) {
			cin >> matriz[l][c];
		}
	}

	// um for pra cada dimensão...
	for(l = 0; l < 3; l++) {
		for(c = 0; c < 4; c++) {
			cout << matriz[l][c] << " ";
		}
		cout << "\n";
	}

	cout << "\n\nFim do Programa\n\n";

	return 0; // padrão não retorna nada...
}