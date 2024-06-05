/* ***************************************************************************
AULA 005 - https://youtu.be/o44fNZn4zNw?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #05 - Declara��es m�ltiplas de vari�veis, Constantes #Define
Nesta aula de C++ iremos aprender sobre declara��es m�ltiplas de vari�veis e declarar constantes com a diretiva #define
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// declara��o global..
// valor que muda � uma vari�vel
// um valor que n�o pode ser mudado ser� uma constante
// pi - nome da constante
// 3.1415 - valor da constante pi
#define pi 3.1415 // n�o usa o ;
#define canal cout << "Canal Fessor Bruno\n\n"; // n�o usa o ; - neste caso foi usado l� na chamada da constante o ;

// Padr�o ANSI - fun��o principal
int main(){
	
	// declarar vari�vel
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

	return 0; // padr�o n�o retorna nada...
}

