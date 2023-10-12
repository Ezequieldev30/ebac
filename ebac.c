#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o cpf:");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	File *file;
	file = fopen(arquivo, "w");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome:");
	scanf("%s" ,nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file)
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome:");
	scanf("%s" , sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo:");
	scanf("s" ,cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf:");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo\n");
	}
	
	while(fgets(conteudo,200, file) != NULL)
	{
		printf("\nEssas�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
	
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o cpf a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r")
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra\n");
		system("pause");
	}
}

int main()
     {
      int opcao=0;
      int laco=1;
      
      for(laco=1;laco=1;)
      {
      	
      	system("cls");
      	
      	setlocale(LC_ALL, "Portuguese");
      	
      	printf("### Cart�rio da EBAC ###\n\n");
      	printf("Escolha a op��o desejada do menu\n\n");
      	printf("\t1 - Registrar nomes\n");
      	printf("\t2 - Consultar nomes\n");
      	printf("\t3 - Deletar noems\n\n");
      	printf("Op��o:");
      	
      	scanf("d", &opcao);
      	
      	system("cls");
      	
      	switch(opcao)
      	{
      		case 1:
      		registro()
      		break;
      		
      		case 2:
      		consulta()
      		break;
      		
      		case 3:
      		deletar();
      		break;
      		
      		default:
      		printf("Essa op��o n�o est� disponivel\n");
      		system("pause");
      		break;
		}
      	
      	
	  }
	 }