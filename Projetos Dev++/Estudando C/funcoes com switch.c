//==========================================================
//Usando as funções para realizar calculos

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para configurar o idioma protuguês Brasil.


float somar(float n1, float n2){return n1 + n2;}
float subtrair(float n1, float n2){return n1 - n2;}
float multiplicar(float n1, float n2){return n1 * n2;}
float dividir(float n1, float n2){return n1 / n2;}
float porcentagem(float n1, float n2){return (n1 * n2) / 100;}

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");
	
	int opcao;
	float n1, n2, resultado;
	
	printf("\n ******[CALCULADORA]****** \n");
	printf("Digite o primeiro Número: ");
	scanf("%f", &n1);
	printf("Digite o segundo Número: ");
	scanf("%f", &n2);
	
	printf("[1] Somar");
	printf("[2] Subtrair");
	printf("[3] Multiplicar");
	printf("[4] Dividir");
	printf("[5] Porcetagem");
	printf("\n Digite uma opção: ");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			resultado = somar(n1, n2);
			break;
		case 2:
			resultado = subtrair(n1, n2);
			break;
		case 3:
			resultado = multiplicar( n1, n2);
			break;
		case 4:
			if(n2 == 0)
			{
				printf("Não é possível dividir por 0 \n");
			}else
			{
				resultado = dividir(n1, n2);
			}
			
			break;
		case 5:
			resultado = porcentagem(n1, n2);
			break;				
		default:
			printf("Opção Inválida!");	
	}
	printf("Resultado: %.2f \n", resultado);
	system("pause");
	return 0;
}

