#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para configurar o idioma protugu�s Brasil.
#include <time.h>  //Biblioteca para gerar numeros aleatorios com o comando RAND

/*
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	//system("color A"); //Altera a cor do texto na sa�da do terminal.
	system("color 1F"); //Altera a cor do fundo e a letra. 
	
	printf("\n Comando system(color A); altera a cor do texto \n");
	printf("\n Comando system(color 1F); altera a cor do fundo e a letra \n");
	printf("\n Comando setlocale(LC_ALL, portuguese); =>");
	printf(" Esse Comando corrige a acentua��o e a pontua��o gr�fica \n das palavras em portugu�s. \n\n\t");
	
	system("pause"); //pausa o sistema.
	system("cls"); //limpa a tela.
	return 0;
}
*/ 
//==========================================================
/*
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");

	char nome[50], sexo[30];
	int idade;
	float peso, altura;
	
	printf("Digite seu Nome: ");
	gets(nome);
	printf("Digite seu Sexo: ");
	gets(sexo);
	printf("Digite sua Idade: ");
	scanf("%d", &idade);
//	printf("Digite seu Peso: ");
//	scanf("%f", peso);
//	printf("Digite seu Altura: ");
//	scanf("%f", altura);
	
	if(idade < 18)
	{
		printf("\n Lamento! Senhor(a), %s , mas n�o � permitido a entrada de menor de idade. \n", nome, idade);
	}
	if(idade >= 18)
	{
		printf("\n Bem Vindo! Senhor(a), %s , voc� tem %d anos de idade e � maior de idade. \n", nome, idade);
	}
	
//	system("pause");
//	system("cls");
		
	return 0;
}
*/
//==============================================================
// Uso do switch case tomada de decis�o
/*
int numero;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	printf("\n **********[Sistema Operacionais]********** \n");
	printf("[1] - Windows 10 \n");
	printf("[2] - Linux \n");
	printf("Selecione uma op��o: ");
	scanf("%d", &numero);
	
	switch(numero)
	{	
		case 1:
			system("cls");
			printf("Iniciando o Windows 10 ... \n");
			break;
		case 2:
			system("cls");
			printf("Iniciando o Linux ... \n");
			break;
			
		default:
		    printf("\n Op��o Inv�lida! \n");		
			
	}
	
	return 0;
}
*/
//==========================================================
/*
//Uso de fun��es

void teste(void);//Declarando a Fun��o teste

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	printf("Exemplo de fun��o: \n\n ");
	teste();
	
	//system("pause");
	return 0;
}

void teste(void)
{
	printf("To aqui aprendendo linguagem C \n\n");
}
*/
/*
//==========================================================
//Usando as fun��es para realizar calculos

float somar(float n1, float n2){return n1 + n2;}
float subtrair(float n1, float n2){return n1 - n2;}
float multiplicar(float n1, float n2){return n1 * n2;}
float dividir(float n1, float n2){return n1 / n2;}
float porcentagem(float n1, float n2){return (n1 * n2) / 100;}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int opcao;
	float n1, n2, resultado;
	
	printf("\n ******[CALCULADORA]****** \n");
	printf("Digite o primeiro N�mero: ");
	scantf("%f", &n1);
	printf("Digite o segundo N�mero: ");
	scanf("%f", &n2);
	
	printf("[1] Somar");
	printf("[2] Subtrair");
	printf("[3] Multiplicar");
	printf("[4] Dividir");
	printf("[5] Porcetagem");
	printf("Digite uma op��o: ");
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
				printf("N�o � poss�vel dividir por 0 \n");
			}else
			{
				resultado = dividir(n1, n2);
			}
			
			break;
		case 5:
			resultado = portcentagem(n1, n2);
			break;				
		default:
			printf("Op��o Inv�lida!");	
	}
	printf("Resultado: %.2f \n", resultado);
	system("pause");
	return 0;
}
*/

/*
//==========================================================
// Encrementando uma calculadora com o la�o FOR

int numero, resposta;
int contador = 0;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
do
{
	
	printf("\n ******[Tabuada]******\n\n");
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	
	for(contador = 0; contador <= 10; contador++)//la�o FOR
	{
		printf("%d X %d = %d \n", contador, numero, contador * numero);
	}
	printf("\n [1] Novo Calculo \n ");
	printf("[2] Sair do sistema. \n");
	printf("Digite sua Op��o: ");
	scanf("%d",&resposta);
}
while(resposta != 2);// La�o DO While la�o infinito enquanto for verdadeiro
	
	system("pause");
	return 0;
}
*/
/*
//==========================================================
//Usando a comando RAND para gera n�meros aleat�rios

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	printf("\n ******[Jogo do Dados]******\n\n");
	srand(time,NULL);
	printf("Face: %d \n", rand()%6 + 1);
	
	system("pause");
	return 0;


*/

//==========================================================
//

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	printf("\n ******[Tabuada]******\n\n");
	printf("");
	scanf("%",&);
	
	
	system("pause");
	return 0;


























