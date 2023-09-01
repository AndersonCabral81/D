#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	float n1 = 8;
	float n2 = 6;
	float n3 = 9;
	float n4 = 3;
	
	printf("Sem array \n");
	printf("\n Nota3: %.1f \n", n3);
	
	//Array de tamanho 4
	float notas[4] = {8, 6, 9, 3};
	printf("\n Com array \n");
	printf("\n Nota 3: %.1f \n", notas[2]);
	
	//Modificando o conteudo de um array
	
	notas[1] = 7;
		printf("\n Modificando o array \n");
	printf("\n Nota 2: %.1f \n", notas[1]);
	
	//Criando um array de duas dimensoes
	
	float boletim[2][4] = {{8, 7, 9, 3},{4, 5, 8, 6}};
	
	printf("\n Array Multidimensional \n");
	printf("\n Nota: %.1f \n", boletim[1][0]);
	
	return 0;
}





