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
    
    printf("Digite o cpf a ser cadastrado:");
    scanf("%s", &cpf);
    
    strcpy(arquivo,cpf);
    
    FILE *file;
    file = fopen(arquivo, "w");
    fprintf(file,cpf);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado:");
    scanf("%s" ,nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o sobrenome a ser cadastrado:");
    scanf("%s", sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o cargo:");
    scanf("%s", cargo);
    
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
    
    printf("Digite o cpf a ser consultado;");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file==NULL)
    {
    	printf("N�o foi possivel localizar o cpf\n");
	}
	while(fgets(conteudo, 200, file) !=NULL)
	{
		printf("\tEssas s�o as informa��es do usu�rio");
		printf("%s", conteudo);
		printf("\n\n");
		
		system("pause");
		
	}
}

int deletar()
{
   char cpf[40]	;
   printf("Digite o cpf a ser deletado: ");
   scanf("%s", cpf);
   
   remove(cpf);
   
   FILE *file;
   file = fopen(cpf, "r");
   
   if(file==NULL)
   {
   	printf("O usu�rio n�o se encontra no sistema\n");
   	system("pause");
   }
}


int main()
{
	int opcao=0;

	int x=1;
	
	for(x=1;x=1;)
	{
	
		system("cls");
	
	   setlocale(LC_ALL, "Portuguese");
	
	   printf("### Cart�rio da ebac ###\n\n");
       printf("Escolha a op��o:\n\n");
	   printf("\t1 - Registrar nomes\n");
	   printf("\t2 - consultar nomes\n");
	   printf("\t3 - Deletar nomes\n");
	
       scanf("%d", &opcao);
    
       system("cls");
       
       switch(opcao)
       {
       	case 1:
       	registro();
       
    	
    	case 2:
    	consulta();
    
		
		case 3:
		deletar();
		
		default:
		printf("Nenhuma op��o disponivel\n");
		system("pause");
		
    	}
    

}
	
}
