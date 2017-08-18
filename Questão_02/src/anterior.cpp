#include <iostream>
#include <stdlib.h>
#include "primalidade.h"
#include "fatorial.h"

using std::cout;
using std::endl;

int main(int argc, char *argv[]){
	int n, fat;

	n = atoi(argv[1]);

	system("clear");
	

	if(n < 2){
		cout << "ERROR! É necessário usar um número positivo acima de 1 para rodar o programa"<< endl;
	}
	else{
		fat = fatorial(n);

		cout << "-------------------------------------------------------------------------------"<< endl;
		cout << "                      Questão 02 do Laboratorio 1" << endl;
		cout << "                       Você entrou com o valor " << n << endl;
		cout << "     O maior número primo anterior ao fatorial de " << n << "(" << fat << ") é: " << primo(fat-1) << endl;
		cout << "              Desenvolvido por Mateus Barbosa Martins, UFRN"<< endl;
		cout << "-------------------------------------------------------------------------------"<< endl;

	}

	return 0;
}