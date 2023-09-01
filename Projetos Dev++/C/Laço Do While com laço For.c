//==========================================================
// Encrementando uma calculadora com o laço FOR

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para configurar o idioma protuguês Brasil.
#include <time.h>  //Biblioteca para gerar numeros aleatorios com o comando RAND


int numero, resposta;
int contador = 0;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
do
{
	
	printf("\n ******[Tabuada]******\n\n");
	printf("Digite um número: ");
	scanf("%d",&numero);
	
	for(contador = 0; contador <= 10; contador++)//laço FOR
	{
		printf("%d X %d = %d \n", contador, numero, contador * numero);
	}
	printf("\n [1] Novo Calculo \n ");
	printf("[2] Sair do sistema. \n");
	printf("Digite sua Opção: ");
	scanf("%d",&resposta);
}
while(resposta != 2);// Laço DO While laço infinito enquanto for verdadeiro
	
	system("pause");
	return 0;
}