#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct regcadcarro{
	char modelo[10],marca[10],nome[10];
	int quant;
	bool statusdisp;
	
};

struct regcadcliente{
	char nome[10];
	int numcnh;
};
	

struct regtabelapreco{
	char modelo[10];
	float preco;
};


int main(){
struct regcadcarro cadcar[10];
struct regcadcliente cadcli[10];
struct regtabelapreco tabpreco[10];

char login[10], g1login[10], pesqmodelo[10];
int senha, g1senha;
int ind;
int op1, op2, op3, indextabpreco, indexatualizadotabpreco, i, flag1;



op1, op2, op3;
flag1, indextabpreco=0;
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
					
					case 0:		
						exit(0);
						
						break;								
								
					case 1:
							do{
									for(ind=0;ind<=9;ind++){								
									system("cls");
									printf("-CADASTRO DE CARROS-\n\n");
									printf("\nNOME: ");
									fflush(stdin);
									gets(cadcar[ind].nome);
									printf("\nMARCA: ");
									fflush(stdin);
									gets(cadcar[ind].marca);
									printf("\nMODELO: ");
									fflush(stdin);
									gets(cadcar[ind].modelo);
									strupr(cadcar[ind].modelo);
									printf("\nQUANTIDADE: ");
									scanf("%i",&cadcar[ind].quant);
									
									if(cadcar[ind].quant>0){
										cadcar[ind].statusdisp=true;
																			
									}else{
										cadcar[ind].statusdisp=false;
									}
									
									do{
										system("cls");
										printf("\t-CADASTRO DE CARROS-\n");
										printf("\nCADASTRO EFETIVADO COM SUCESSO\n");
										printf("\nDESEJA CONTINUAR CADASTRANDO?");										
										printf("\n1 - Continuar");
										printf("\n0 - Sair\n");
										scanf("%i",&op3);
										if (op3==0){
														ind=11;
													}	
										}while(op3!=0 && op3!=1);
									}
								
								}while(ind<10);
								break;
								
					case 2:
							do{
							
								for(ind=0;ind<=9;ind++){
										system("cls");
										printf("-CADASTRO DE CLIENTES-\n\n");
										printf("\nNOME: ");
										fflush(stdin);
										gets(cadcli[ind].nome);
										printf("\nCNH: ");
										scanf("%i",&cadcli[ind].numcnh);
										do{
												system("cls");
												printf("\t-CADASTRO DE CLIENTE-\n");
												printf("\nCADASTRO EFETIVADO COM SUCESSO\n");
												printf("\nDESEJA CONTINUAR CADASTRANDO?");										
												printf("\n1 - Continuar");
												printf("\n0 - Sair\n");
												scanf("%i",&op3);
												if (op3==0){
															ind=11;
														}	
											}while(op3!=0 && op3!=1);
										
									}
								}while(ind<10);
								
								break;			
					
					case 3:
								do{
								
									system("cls");
									printf("-CADASTRO TABELA PRECO-\n\n");
									printf("\nMODELO: ");
									fflush(stdin);
									gets(pesqmodelo);
									
									for (i=0; i< 10; i++){
										strupr(pesqmodelo);
																				
										if (strcmp(pesqmodelo,cadcar[i].modelo) == 0){
											flag1 = 1;
											indexatualizadotabpreco = i;
										}
									}
									
									if (flag1 == 0){										
										printf("\nMODELO DE VEICULO NAO CADASTRADO, CADASTRAR VEICULO!");										
										
										
									}
									else
									{
										printf("\nPRECO: ");
										scanf("%f",&tabpreco[indexatualizadotabpreco].preco);
									}
									
									printf("\n\nCONTINUAR CADASTRO? (1)-SIM  (2)-NAO\n");
									printf("Op: ");
									scanf("%i",&op3);
									
									indextabpreco ++;
									
								}while (op3 != 2);								
								
								break;
								
					case 4:
							
								printf("-CADASTRO TABELA PRECO-\n\n");
								
								
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

