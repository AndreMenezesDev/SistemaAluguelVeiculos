#include<stdio.h>
#include<stdlib.h>
#include<string.h>

123
int main(){



char login[10], g1login[10];
int senha, g1senha;
int op1, op2;

op1, op2=1;
strcpy(g1login,"GERENTE");
g1senha=123;
	do 
	{
		system("cls");
		printf("Login: ");
		fflush(stdin);
		gets(login);
		printf("Senha: ");
		scanf("%i",&senha);
		
		if (strcmp( strupr(login), g1login)==0 && (senha == g1senha))
		{
			do
			{
				system("cls");
				printf("1.Cadastrar Carro\n");
				printf("2.Cadastrar Cliente\n");
				printf("3.Cadastrar Tabela Preco\n");
				printf("4.Realizar Aluguel\n");
				printf("0-Sair\n");
				scanf("%i",&op2);
				
				system("cls");
				switch (op2){
					
					case 0:		op2=0;
								break;
								
								
					case 1:
								printf("-CADASTRO DE CARROS-\n\n");
								printf("\nVALOR: ");
								
								printf("\nQUANTIDADE: ");
								
								printf("\nMARCA: ");
								fflush(stdin);
								
								printf("\nMODELO: ");
								fflush(stdin);
								
								printf("\nANO: ");
								fflush(stdin);
								
								printf("\nCHASSI: ");
								fflush(stdin);
								
														
								
								
								break;
					
					case 2:
								printf("-CADASTRO DE CLIENTES-\n\n");
								printf("\nNOME: ");
								fflush(stdin);
								
								printf("\nMATRICULA: ");
									
								
								
								break;			
					
					case 3:
								printf("-CADASTRO TABELA PRECO-\n\n");
								
								
								
								system("pause");
								break;
								
					case 4:
								printf("-CADASTRO TABELA PRECO-\n\n");
								
								
								
								system("pause");
								break;					
											
					
					default: 	printf("Opcao Invalida!\n\n") ;
								break;
								
				}
				
			}while(op2!=0); 
		}		
		else
		{
			system("cls");
			printf("Deseja sair?\n");
			printf("0-Sim\n");
			printf("1-Nao\n");
			scanf("%i",&op2);
			if (op2==0)
			{	
				return 0;
			}
		}
		
		
	}while(op1=1);


	system("pause");
}

