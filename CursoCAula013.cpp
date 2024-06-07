/* ***************************************************************************
AULA 013 - https://youtu.be/PB6MrnJ3m34?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #013 - Comando Switch Case
Nesta aula iremos aprender como utilizar o comando switch para compara��es e 
sele��o m�ltipla que testa o valor de uma express�o contra uma lista de constantes.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

#include <locale.h> // definir localiza��o para acentuar coeertamente...

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// Padr�o ANSI - fun��o principal
int main() {

	setlocale(LC_ALL, "Portuguese_Brazil"); 
	
	// declarar vari�vel
	int val;

	// mostra mensagem...
	cout << "\n\nSelecione uma cor:\n";
	cout << "[1]=Verde, [2]=Azul, [3]=Vermelho\n";
	cin >> val; // captura teclado

	// valida��o com switch
	switch (val) {
		case 1:
			cout << "Cor selecionada: Verde\n\n";
			break;

		case 2:
			cout << "Cor selecionada: Azul\n\n";
			break;
		
		case 3:
			cout << "Cor selecionada: Verde\n\n";
			break;

		default:
			cout << "Cor inv�lida!\n\n";
		break;
	}

	// mostra mensagem...
	cout << "\n\nSelecione uma cor:\n";
	cout << "[1, 2, 3] = Verde, [4, 5, 6] = Azul\n";
	cin >> val; // captura teclado

	// valida��o com switch
	switch (val) {
		case 1:
		case 2:
		case 3:
			cout << "Cor selecionada: Verde\n\n";
			break;

		case 4:
		case 5:
		case 6:
			cout << "Cor selecionada: Azul\n\n";
			break;

		default:
			cout << "Cor inv�lida!\n\n";
		break;
	}

	// mostra mensagem...
	cout << "\n\nSelecione uma Transporte:\n";
	cout << "[1]=Carro, [2]=Moto [3]=Avi�o, [4]=Helic�ptero\n";
	cin >> val; // captura teclado

	// valida��o com switch
	switch (val) {
		case 1:
		case 2:
			cout << "Transporte Terrestre\n\n";
			switch (val) {
				case 1:
					cout << "Carro selecionado\n\n";
					break;
				case 2:
					cout << "Moto selecionada\n\n";
					break;
			}
			break;

		case 3:
		case 4:
			cout << "Transporte A�reo\n\n";
			switch (val) {
				case 3:
					cout << "Avi�o selecionado\n\n";
					break;
				case 4:
					cout << "Helic�ptero selecionado\n\n";
					break;
			}
			break;

		default:
			cout << "Cor inv�lida!\n\n";
		break;
	}

	cout << "Programa Finalizado!!\n\n";

	return 0; // padr�o n�o retorna nada...
}