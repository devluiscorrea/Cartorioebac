#include <stdio.h>	    //biblioteca de com com o usuário
#include <stdlib.h>	 	//biblioteca de alocação de espaço em memória
#include <locale.h> 	//biblioteca de texto por região
#include <string.h> 	//biblioteca responsável por cuidar das string


int registro()  //Responsável por cadastrar os usuários no sistema
{
	
	//início criação de variáveis(string)
	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	//final da criação de variáveis
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);  //%s refere-se a string
	
	
	strcpy(arquivo, cpf); 	//Responsavel por copiar os valores das string
	
	FILE *file; 	// cria o arquivo
	file = fopen(arquivo, "w"); 	// cria o arquivo
	fprintf(file,cpf);	 // salvo o valor da variavel
	fclose(file);	 // fecha o arquivo
	
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
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);	
	
    system("pause");
    
	
}

int consulta ()
{
		setlocale(LC_ALL, "portuguese");
		
		char cpf[40];
		char conteudo[200];
		
		printf("Digite o cpf a ser consultado ");
		scanf("%s",cpf);
		
		FILE*file;
		file=fopen(cpf,"r");
		
		if(file==NULL)
		{
			printf("Não foi possível abrir o arquivo, não localizado.\n");
		}
		
		while(fgets(conteudo,200,file)!=NULL)
		{
			printf("\nEssas são as informações do usuário: ");
			printf("%s",conteudo);
			printf("\n\n");
		}
	
		system("pause");
		fclose(file);
	}
		
		

int deletar()
{
	char cpf[40];
	
	printf("Digite o cpf do usuário a ser deletado\n");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuário não se enconrtra cadastrado no sistema. \n");
		system("pause");
		fclose(file);
	}
	
	
}



int main()
{
int opcao=0;  //definindo variáveis
int x=1;
      
      
for(x=1;x=1;)
    {
	    
    system("cls"); //responsável por limpar a tela
		
	   
	setlocale(LC_ALL, "portuguese");  //definindo linguagem
	   
	   
       		printf("\t**\tCartórtio da EBAC\t**\n\n");
        	printf("Escolha a opção desejada do menu:\n\n");
        	printf("\t1-Registrar nomes\n");
        	printf("\t2-Consultar nomes\n");
        	printf("\t3-Deletar nomes\n\n");
                                        //Fim do menu
       
    scanf("%d", &opcao);    			//armazenando a escolha do usuário
       
    system("cls");
    
    switch(opcao)   	//início da seleção
    {
    	case 1:
    		registro();		//chamada de funções
        	break;
        
        case 2:
        	consulta();
	      	break;
	    
	    case 3:
	    	deletar();
	      	break;
	      	
	  
	    default:
	    	printf("Opção não existe\n");
	       	system("pause");
	       	break;
    		
	}    
    }                   			//Fim da seleção 
}



		   
			
	   
	   

