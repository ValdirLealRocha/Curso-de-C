/* ***************************************************************************
AULA 027 - https://youtu.be/KuipEEelnpU?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #027 - Enum
Nesta aula iremos aprender como trabalhar com a estrutura enum, 
vamos aprender a construir enumeradores em C++
*/
// Biblioteca dos comandos básicos de entrada e saí­da.
#include <iostream> // não usa o ;

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// MAIN() - Padrão ANSI - função principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// é um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar variável
	// o indice é sequencial e inicial no 0, ou o número definido...
	// ou definir um valor pra cada indice do enum...
	enum armas {fuzil, revolver, rifle, escopeta}; // TIPO
	armas armaSel; // variável do tipo unum...
	
	armaSel = fuzil; // no enum o valor é zero, nome identico pra inicializar...
	cout << "\narmaSel = fuzil: indice = " << armaSel;

	armaSel = rifle; // no enum o valor é zero, nome identico pra inicializar...
	cout << "\n\narmaSel = rifle: indice = " << armaSel;

	// boa práticas de declarar no topo :)...
	enum armas1 {fuzil1 = 100, revolver1 = 8, rifle1 = 12, escopeta1 = 1}; // TIPO
	armas1 armaSel1; // variável do tipo unum...

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

	return 0; // padrão não retorna nada...
}