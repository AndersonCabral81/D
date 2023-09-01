#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 200

// Variaveis globais
char nome[SIZE] [50];
char email[SIZE] [50];
int cpf [SIZE];
int op;

void cadastro_cliente(); //Fun��o para cadastrar os clientes no sistema.
void busca_cliente(); //Fun��o para fazer busca no sistema de cadastro de clientes.
void lista_cliente(); // Fun��o que lista todos os clientes cadastrados no sistema.

int main(void) //main principal.
{
	setlocale(LC_ALL, "portuguese"); //comando para definir caracteres da lingua portuguesa(Brasil).

//	cadastro_cliente(); //Chama a fun��o cadastro cliente.
//	busca_cliente(); //Chama a fun��o busca cliente.
//	lista_cliente(); //Chama a fun��o lista cliente.
	
	do
	{
		system("cls");
		
		printf("\n Menu Principal \n\n [1]-Cadastrar \n [2]-Listar Todos \n [3]-Pesquisar \n [4]-Sair \n");
		printf("Digite sua Op��o: ");
		scanf("%d", &op);
		printf("----------------------------------------------");
		switch(op)
		{
			case 1:
				cadastro_cliente();
				break;
			case 2:
				lista_cliente();
				break;
			case 3:
				busca_cliente();
				break;
			case 4:
				system("exit");
				break;
			default:
				printf("Op��o Inv�lida! ");
				getchar();
				getchar();
				break;			
		}
		
	}while(op != 4);
}

void cadastro_cliente() //Fun��o cadastro cliente.
{
	setlocale(LC_ALL, "portuguese");
	
	static int linha;
	
	do
	{
		printf("----------------------------------------------");
		
		printf("\n Sistema de Cadastro de Clientes \n");
		printf("\n Digite seu Nome Completo: ");
		scanf("%s", &nome[linha]);
		printf("\n Digite seu E-mail: ");
		scanf("%s", &email[linha]);
		printf("\n Digite seu CPF: ");
		scanf("%d", &cpf[linha]);
		printf("\n Digite [0] para continuar ou [1] para sair  \n");
		printf("Digite sua Op��o: ");
		scanf("%d", &op);
		linha++;
		printf("----------------------------------------------");
	}while(op == 0);
}

void busca_cliente() //Fun��o busca cliente.
{
	setlocale(LC_ALL, "portuguese");
	
	//Variaveis locais.
	
	int busca_cpf, i;
	char busca_email [50];
	char busca_nome [50];
 	
	do
	{
		printf("----------------------------------------------");
		
		printf("\n Sistema de Busca de Clientes \n");
		
		printf("\n Digite \n [1] para buscar por CPF \n [2] para buscar por email \n [3] para buscar por nome \n");	
			printf("Digite sua Op��o: ");
		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
				printf("\n Digite o CPF: ");
				scanf("%d", &busca_cpf);
				for(i = 0; i < SIZE; i++)
				{
					if(cpf[i] == busca_cpf)
					{
						printf("\n Nome: %s \n email: %s \n CPF: %d", nome[i], email[i], cpf[i]);
					}
				}
			break;	
			case 2:
				printf("\n Digite seu E-mail: ");
				scanf("%s", &busca_email);
				for(i = 0; i < SIZE; i++)
				{
					if(strcmp(email[i], busca_email) == 0)
					{
						printf("\n Nome: %s \n email: %s \n CPF: %d", nome[i], email[i], cpf[i]);
					}
				}
				break;
			case 3:
				printf("\n Digite seu Nome: ");
				scanf("%s", &busca_nome);
				for(i = 0; i < SIZE; i++)
				{
					if(strcmp(nome[i], busca_nome) == 0)
					{
						printf("\n Nome: %s \n email: %s \n CPF: %d", nome[i], email[i], cpf[i]);
					}
				}
				break;
			default:
				printf("\n Op��o Inv�lida! \n Tente Novamente! \n");
				getchar();
				getchar();
				break;
		}
		
		printf("----------------------------------------------");
		
		printf("\n Digite [1] para continuar � busca ");
		printf("\n Digite [0] para sair da busca \n");
		printf("Digite sua Op��o: ");
		scanf("%d", &op);
		printf("----------------------------------------------");
		
	}while(op == 1);
}

void lista_cliente() //Fun��o lista cliente ja cadastrados no sistema.
{
	int i;
	
	for(i == 0; i < SIZE; i++)
	{
		if(cpf[i] > 0)
		{
				printf("\n Nome: %s \n email: %s \n CPF: %d", nome[i], email[i], cpf[i]);		
		}	
		else
		{
			break;
		}	
	}
	getchar();
	getchar();	
}

