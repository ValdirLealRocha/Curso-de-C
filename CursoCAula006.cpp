/* ***************************************************************************
AULA 006 - https://youtu.be/bt__FYdvTOY?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #06 - Variáveis Globais e Locais, Operadores matemáticos
Nesta aula iremos aprender sobre variáveis globais e locais e também sobre operadores matemáticos.
*/
// Biblioteca dos comandos básicos de entrada e saída.
#include <iostream> // não usa o ;

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// variáveis escopo globais ao arquivo
int n1, n2;

// Padrão ANSI - função principal
int main(){
	
	// declarar variável
	int n3, n4; // escopo local será visível dentro da função main()
	
	// operadores matemático: + adição, - subtração, * multiplicação, / divisão e % módulo - () priorisa o calculo
	int res;
	
	// inicialização de variáveis
	n1 = 11; // local
	n2 = 3;  // local
	n3 = 5;  // global
	n4 = 2;  // global
	
	// soma variaveis
	res = n1 + n2 + n3 + n4;
	cout << "A soma de todas as variáveis: " << res << "\n\n";
	
	// calcula...
	res = (n1 + n2 + n3 + n4) - 10;
	cout << "A soma de todas as variáveis: " << res << "\n\n";

	// calcula...
	res = (n1 + n2) * n4; // observar as presedencias das operações, o () ajuda a separar o que se deseja calcular
	cout << "Valor de res: " << res << "\n\n";
	
	// boas práticas diz que declarações de variaveis é no topo, aqui pra estudar deixei no momento que estava aprendendo e fazendo os exervcicios...
	int res1, res2;
	res1 =  n1 / n2; // divisão...
	res2 = n1 % n2; // usando o operador módulo...
	cout << "Divisão de res1: " << res1 << " - Resto de res2: " << res2 << "\n\n";

	return 0; // padrão não retorna nada...
}

