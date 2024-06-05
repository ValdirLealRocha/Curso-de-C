/* ***************************************************************************
AULA 006 - https://youtu.be/bt__FYdvTOY?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #06 - Vari�veis Globais e Locais, Operadores matem�ticos
Nesta aula iremos aprender sobre vari�veis globais e locais e tamb�m sobre operadores matem�ticos.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// vari�veis escopo globais ao arquivo
int n1, n2;

// Padr�o ANSI - fun��o principal
int main(){
	
	// declarar vari�vel
	int n3, n4; // escopo local ser� vis�vel dentro da fun��o main()
	
	// operadores matem�tico: + adi��o, - subtra��o, * multiplica��o, / divis�o e % m�dulo - () priorisa o calculo
	int res;
	
	// inicializa��o de vari�veis
	n1 = 11; // local
	n2 = 3;  // local
	n3 = 5;  // global
	n4 = 2;  // global
	
	// soma variaveis
	res = n1 + n2 + n3 + n4;
	cout << "A soma de todas as vari�veis: " << res << "\n\n";
	
	// calcula...
	res = (n1 + n2 + n3 + n4) - 10;
	cout << "A soma de todas as vari�veis: " << res << "\n\n";

	// calcula...
	res = (n1 + n2) * n4; // observar as presedencias das opera��es, o () ajuda a separar o que se deseja calcular
	cout << "Valor de res: " << res << "\n\n";
	
	// boas pr�ticas diz que declara��es de variaveis � no topo, aqui pra estudar deixei no momento que estava aprendendo e fazendo os exervcicios...
	int res1, res2;
	res1 =  n1 / n2; // divis�o...
	res2 = n1 % n2; // usando o operador m�dulo...
	cout << "Divis�o de res1: " << res1 << " - Resto de res2: " << res2 << "\n\n";

	return 0; // padr�o n�o retorna nada...
}

