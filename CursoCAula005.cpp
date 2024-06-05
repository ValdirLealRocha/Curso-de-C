/* ***************************************************************************
AULA 005 - https://youtu.be/o44fNZn4zNw?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #05 - Declarações múltiplas de variáveis, Constantes #Define
Nesta aula de C++ iremos aprender sobre declarações múltiplas de variáveis e declarar constantes com a diretiva #define
*/
// Biblioteca dos comandos básicos de entrada e saída.
#include <iostream> // não usa o ;

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// declaração global..
// valor que muda é uma variável
// um valor que não pode ser mudado será uma constante
// pi - nome da constante
// 3.1415 - valor da constante pi
#define pi 3.1415 // não usa o ;
#define canal cout << "Canal Fessor Bruno\n\n" // não usa o ; - neste caso foi usado lá na chamada da constante o ;

// Padrão ANSI - função principal
int main(){
	
	// declarar variável
	//int vida, tiros, life;

	/* semelhantes a linh acima...
	int vida;
	int tiros;
	int life;

	int vida; int tiros; int life;
	*/

	int vida = 3, tiros = 500, life = 100;
	
	cout << pi << "\n\n";
	
	canal;

	return 0; // padrão não retorna nada...
}

