/* ***************************************************************************
AULA 04 - https://youtu.be/hur9N6pHEbU?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #04 - Variáveis em C++
Nesta aula iremos aprender sobre declaração de variáveis em c++
*/
// Biblioteca dos comandos básicos de entrada e saída.
#include <iostream>

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Padrão ANSI - função principal
int main(){
	
	// declarar variável com um TIPO, NOME e um VALOR
	// TIPO NOME = VALOR;
	int vidas= 0; // do tipo inteiros
	char letra = 'B'; // do tipo char - um byte 'a' ou 'A' - tamanho fixo e utiliza todo o tamanho reservado - "Bruno          "
	double decimal = 5.2; // do tipo valor com casa decimal com maior precisão 2.499999999999
	float decimal1 = 5.2; // do tipo valor com casa decimal com menorprecisão 2.5
	bool vivo = true; // do tipo booleano (true/false) - 0 ou 1
	string nome = "Bruno"; // do tipo texto - maior precisão ao guardar os dados que o char, não utiliza todo o tamanho reservado - "Bruno"
	
	// printa na tela
	// endl e \n - quebra a linha
	cout << vidas << endl;
	cout << letra << endl;
	cout << decimal << endl;
	cout << decimal1 << endl;
	cout << vivo << endl;
	cout << nome << endl;
	// semelhante a linha de cima...
	cout << vidas << "\n" << letra << "\n" << decimal << "\n" << decimal1 << "\n" << vivo << "\n" << nome << "\n";

	// cout << - saída na tela
	// cin  >> - entrada via teclado
	
	cout << "Digite o número de vidas: "; // mostra mensagem na tela...
	cin >> vidas; // captura o que foi digitado via teclado e armazena na variável...
	cout << "Vidas: " << vidas << "\n";

	cout << "Digite uma letra: "; // mostra mensagem na tela...
	cin >> letra; // captura o que foi digitado via teclado e armazena na variável...
	cout << "Letra: " << letra << "\n";
	
	cout << "Digite um valor de dinheiro (use o ponto para decimal): "; // mostra mensagem na tela...
	cin >> decimal; // captura o que foi digitado via teclado e armazena na variável...
	cout << "Valor informado do dinheiro: " << decimal << "\n";

	cout << "Digite seu nome: "; // mostra mensagem na tela...
	cin >> nome; // captura o que foi digitado via teclado e armazena na variável...
	cout << "Nome: " << nome << "\n";

	// outro formato de mostrar os dados...
	cout << "\nVida: " << vidas << "\nLetra: " << letra << "\nDinheiro: " << decimal << "\nDecimal2: " << decimal1 << "\nVivo: " << vivo << "\nNome: " << nome << "\n";

	return 0; // padrão não retorna nada...
}

