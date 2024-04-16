 #include <stdio.h> //biblioteca de comunica��o com usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria 
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h>//biblioteca respons�vel por cuidar das strings

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s" ,sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digita o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
	}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");//definindo linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file ==  NULL)
	{
	printf("N�o foi poss�vel abrir o arquivo, n�o localizado!. /n");
	}

	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
	
	
}

int deletar()
{
	setlocale(LC_ALL, "Portuguese");//definindo linguagem
	
	char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	fclose(file);
	
	if(file == NULL)
	{
	printf("O usu�rio n�o se encontra no sistema!. \n");
	system("pause");	
	}	
	
	remove(cpf);
	
	if(file != NULL)
	{
		printf("\nUsu�rio deletado com sucesso! \n");
		system("pause");
		
	}
	}


int main ()
{
    int opcao=0; //Definindo var�aveis 
    int laco=1;
    char senhadigitada[10]="a";
    int comparacao;
    
    
    printf("### Cart�rio da EBAC###\n\n");
    printf("Login de administrador!\n\nDigite a sua senha:");
    scanf("%s",senhadigitada);
    
    comparacao = strcmp(senhadigitada, "admin");
    
    if(comparacao == 0)
    { 
    	system ("cls");
    	for(laco=1;laco=1;)
		{
	
		system("cls");
		
		setlocale(LC_ALL, "Portuguese");//definindo linguagem
	
		printf("### Cart�rio da EBAC###\n\n");//inicio do menu
		printf("Escolha a op��o desejada do menu : \n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n");
		printf("\t4 - Sair do sistema \n\n");
		printf("Op��o: ");//final do menu
	
		scanf("%d", &opcao);//armazenando escolha usu�rio
	
		system("cls"); //comando limpar tela
		
		
		switch(opcao)
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;
			
			default:
			printf("Essa op��o n�o est� dispon�vel!\n");
			system("pause");
			break;
				
		}
	}
	}
	else
	printf("Senha incorreta");

	
	}
	


