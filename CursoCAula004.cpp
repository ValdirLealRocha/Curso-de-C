/* ***************************************************************************
AULA 04 - https://youtu.be/hur9N6pHEbU?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #04 - Vari�veis em C++
Nesta aula iremos aprender sobre declara��o de vari�veis em c++
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream>

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// Padr�o ANSI - fun��o principal
int main(){
	
	// declarar vari�vel com um TIPO, NOME e um VALOR
	// TIPO NOME = VALOR;
	int vidas= 0; // do tipo inteiros
	char letra = 'B'; // do tipo char - um byte 'a' ou 'A' - tamanho fixo e utiliza todo o tamanho reservado - "Bruno          "
	double decimal = 5.2; // do tipo valor com casa decimal com maior precis�o 2.499999999999
	float decimal1 = 5.2; // do tipo valor com casa decimal com menorprecis�o 2.5
	bool vivo = true; // do tipo booleano (true/false) - 0 ou 1
	string nome = "Bruno"; // do tipo texto - maior precis�o ao guardar os dados que o char, n�o utiliza todo o tamanho reservado - "Bruno"
	
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

	// cout << - sa�da na tela
	// cin  >> - entrada via teclado
	
	cout << "Digite o n�mero de vidas: "; // mostra mensagem na tela...
	cin >> vidas; // captura o que foi digitado via teclado e armazena na vari�vel...
	cout << "Vidas: " << vidas << "\n";

	cout << "Digite uma letra: "; // mostra mensagem na tela...
	cin >> letra; // captura o que foi digitado via teclado e armazena na vari�vel...
	cout << "Letra: " << letra << "\n";
	
	cout << "Digite um valor de dinheiro (use o ponto para decimal): "; // mostra mensagem na tela...
	cin >> decimal; // captura o que foi digitado via teclado e armazena na vari�vel...
	cout << "Valor informado do dinheiro: " << decimal << "\n";

	cout << "Digite seu nome: "; // mostra mensagem na tela...
	cin >> nome; // captura o que foi digitado via teclado e armazena na vari�vel...
	cout << "Nome: " << nome << "\n";

	// outro formato de mostrar os dados...
	cout << "\nVida: " << vidas << "\nLetra: " << letra << "\nDinheiro: " << decimal << "\nDecimal2: " << decimal1 << "\nVivo: " << vivo << "\nNome: " << nome << "\n";

	return 0; // padr�o n�o retorna nada...
}

