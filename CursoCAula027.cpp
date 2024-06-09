/* ***************************************************************************
AULA 027 - https://youtu.be/KuipEEelnpU?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #027 - Enum
Nesta aula iremos aprender como trabalhar com a estrutura enum, 
vamos aprender a construir enumeradores em C++
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// MAIN() - Padr�o ANSI - fun��o principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// � um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar vari�vel
	// o indice � sequencial e inicial no 0, ou o n�mero definido...
	// ou definir um valor pra cada indice do enum...
	enum armas {fuzil, revolver, rifle, escopeta}; // TIPO
	armas armaSel; // vari�vel do tipo unum...
	
	armaSel = fuzil; // no enum o valor � zero, nome identico pra inicializar...
	cout << "\narmaSel = fuzil: indice = " << armaSel;

	armaSel = rifle; // no enum o valor � zero, nome identico pra inicializar...
	cout << "\n\narmaSel = rifle: indice = " << armaSel;

	// boa pr�ticas de declarar no topo :)...
	enum armas1 {fuzil1 = 100, revolver1 = 8, rifle1 = 12, escopeta1 = 1}; // TIPO
	armas1 armaSel1; // vari�vel do tipo unum...

	// impime os valores em cada indice do enum criado...
	cout << "\n\n";
	armaSel1 = fuzil1;
	cout << "\narmaSel1 = fuzil: " << armaSel1;
	armaSel1 = revolver1;
	cout << "\narmaSel1 = revolver: " << armaSel1;
	armaSel1 = rifle1;
	cout << "\narmaSel1 = rifle: " << armaSel1;
	armaSel1 = escopeta1;
	cout << "\narmaSel1 = escopeta: " << armaSel1;

	return 0; // padr�o n�o retorna nada...
}