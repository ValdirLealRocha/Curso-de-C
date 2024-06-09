/* ***************************************************************************
AULA 024 - https://youtu.be/cIZLMjlgmbU?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #024 - Omissão de argumentos e argumentos padrão
Nesta aula iremos aprender um pouco mais sobre funções e seus argumentos, 
iremos aprender como omitir um argumento e declarar argumentos com valor padrão.
*/
// Biblioteca dos comandos básicos de entrada e saí­da.
#include <iostream> // não usa o ;

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Prototipar
void imp(string txt = "CFB Cursos"); // na declaração da função passo um parametro padrão...

// MAIN() - Padrão ANSI - função principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// é um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar variável
	imp("Bruno"); // informo uma informação
	imp();        // omiti argumento e imprime a informação padrão...

	return 0; // padrão não retorna nada...
}

// mostra dados na tela
void imp(string txt) {
	cout << "\n" << txt << "\n";
}
