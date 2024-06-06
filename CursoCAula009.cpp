/* ***************************************************************************
AULA 009 - https://youtu.be/yjTxGPznb1w?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #009 - Comando de decisão IF ELSE- Parte 1
Nesta aula de C++ iremos aprender sobre o comando condicional IF, para estruturas de tomada de decis�o.
*/
// Biblioteca dos comandos básicos de entrada e saída.
#include <iostream> // não usa o ;

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Padrão ANSI - função principal
int main(){
	
	// declarar variável
	int num = 10;

	/*
	// sintax do if
	se(dia de sol){
		vou ao clube
	}se não / caso contrário{
		vou ao cinema
	}
	*/

	// bloco de comando condicional Lógico IF() - teste lógico
	// Operadores de comparação
	// > maior, < menor, >= maior ou igual, <= menor ou igual, == igualdade, != diferente de
	// 10 < 5 = false (false)
	// 50 > 25 true (verdadeiro)
	// 100 > (25 * 2) = false
	// 100 >= (25 * 2) = true
	// num > 0 = true
	if(num >= 10){
		cout << "\nValor de num MAIOR OU IGUAL que 10";
	}

	// boas práticas é declarar variaveis no topo, aqui só declarei pra estudos...
	int num1 = 10;
	int num2 = 50;

	// menor
	if(num1 < num2){
		cout << "\nResultado VERDADEIRO";
	}else{
		cout << "\nResultado FALSO";
	}

	// maior
	if(num1 > num2){
		cout << "\nResultado VERDADEIRO";
	}else{
		cout << "\nResultado FALSO";
	}

	// igual
	int sol = 1;
	if(sol == 1){
		cout << "\nVou ao Clube";
	}else{
		cout << "\nVou ao Cinema";
	}
	
	// mudei valor da variavel sol para 0
	sol = 0;
	if(sol){ // só a variavel o teste lógico valida que 0 é false 1 é true - só neste caso...
		cout << "\nVou ao Clube";
	}else{
		cout << "\nVou ao Cinema";
	}

	return 0; // padrão não retorna nada...
}