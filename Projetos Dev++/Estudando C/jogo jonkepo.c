/*Aula 03/05/2023 criando o jogo jokenpo com a fun��o rand() e 
a biblioteca <time>*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para configurar o idioma protugu�s Brasil.
#include <time.h> //Biblioteca que chama a fun��o rand();


int jogador, IA, sair;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	do
	{
	
	printf("\n ______Jogo JonKePo______ \n\n");
	
	printf("********************************** \n");
	printf(" [1]-Pedra \n");
	printf(" [2]-Papel \n");
	printf(" [3]-Tessoura \n");
	printf("\n**********************************\n");
	printf("\n Digite sua Op��o para Jogar: ");
	scanf("%d",&jogador);
	printf("\n**********************************\n");

		
	//Logica do jogador
	switch(jogador)
	{
		case 1: 
			printf("\n Voc� escolheu PEDRA \n");
		break;
		
		case 2: 
			printf("\n Voc� escolheu PAPEL \n");
		break;
		
		case 3: 
			printf("\n Voc� escolheu TESSOURA \n");
		break;
		
		default:
			printf("\n Op��o Invalida! \n");			
	}
	
		// l�gica do computador
	srand(time(NULL));
	IA=("%d",rand()%3 + 1);
	switch(IA)
	{
		case 1:
			printf("\n IA escolheu PEDRA \n");
		break;
		
		case 2:
			printf("\n IA escolheu PAPEL \n");
		break;
		
		case 3:
			printf("\n IA escolheu TESOURA \n");
		break;		
	}
	
	if(jogador == IA){
		printf("\n Empate \n");
		}
	else if((jogador == 1 && IA == 3) || (jogador == 2 && IA == 1) || (jogador == 3 && IA == 2)){
			printf("\n Jogador Venceu \n");
	}
	else{
		printf("\n IA venceu \n");
	}
	printf("\n**********************************\n");
		//printf("\n Aperte qualquer Tecla \n");
		//printf("\nDigite [N] para Continuar no Jogo! \n");
		printf("\n Aperte [0] para continuar jogando:");
		printf("\n Aperte [4] para sair do jogo:");
		printf("\n Sua Op��o:");
		scanf("%d", &jogador);	
	printf("\n**********************************\n");
	
}
while(jogador <= 3);
	
	return 0;
}



