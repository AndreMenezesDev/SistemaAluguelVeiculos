#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct regcadcarro{
	char modelo[10],marca[10];
	int quant;
	
};

struct regcadcliente{
	char nome[10];
	int numcnh;
};
	

struct regtabelapreco{
	char marca[10];
	float preco;
};


int main(){
struct regcadcarro cadcar[10];
struct regcadcliente cadcli[10];
struct regtabelapreco tabpreco[10];

char login[10], g1login[10], pesqmodelo[10], pesqmarca[10];
int senha, g1senha, pesqnumcnh, horasalugadas;
int ind,ind1;
int op1, op2, op3, op4, indextabpreco, indexaux, indexauxcli, indexauxmodelo, indexauxmarca, indexauxmarcatabpreco, i, flag1;
float valortotal, valorpago, valortroco;


op1,op2, op4=1;
flag1, indextabpreco, ind, ind1=0;
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
									
									system("cls");
									printf("-CADASTRO DE CARROS-\n\n");
									printf("\nMODELO: ");
									fflush(stdin);
									gets(cadcar[ind].modelo);
									strupr(cadcar[ind].modelo);
									printf("\nMARCA: ");
									fflush(stdin);
									gets(cadcar[ind].marca);
									strupr(cadcar[ind].marca);																		
									printf("\nQUANTIDADE: ");
									scanf("%i",&cadcar[ind].quant);
									
									ind++;
									
									system("cls");
									printf("\t-CADASTRO DE CARROS-\n");
									printf("\nCADASTRO EFETIVADO COM SUCESSO\n");
									printf("\nDESEJA CONTINUAR CADASTRANDO?");										
									printf("\n1 - Continuar");
									printf("\n0 - Sair\n");
									scanf("%i",&op3);
									
								}while(op3!=0);
								break;
								
					case 2:
							do{							
								
								system("cls");
								printf("-CADASTRO DE CLIENTES-\n\n");
								printf("\nNOME: ");
								fflush(stdin);
								gets(cadcli[ind1].nome);
								printf("\nCNH: ");
								scanf("%i",&cadcli[ind1].numcnh);
								
								ind1++;
								system("cls");
								printf("\t-CADASTRO DE CLIENTE-\n");
								printf("\nCADASTRO EFETIVADO COM SUCESSO\n");
								printf("\nDESEJA CONTINUAR CADASTRANDO?");										
								printf("\n1 - Continuar");
								printf("\n0 - Sair\n");
								scanf("%i",&op3);
								
							}while(op3!=0);
							break;		
					
					case 3:
								do{
									flag1=0;
									system("cls");
									printf("-CADASTRO TABELA PRECO-\n\n");
									printf("\nMARCA: ");
									fflush(stdin);
									gets(pesqmarca);
									strupr(pesqmarca);
									for (i=0; i< ind; i++){
															
										if (strcmp(pesqmarca,cadcar[i].marca) == 0){
											flag1 = 1;											
										}
									}
									
									if (flag1 == 0){										
										printf("\nMARCA DE VEICULO NAO CADASTRADO, CADASTRAR VEICULO!\n");
										system("pause");
									}
									else
									{
										flag1=0;
										for (i=0; i< indextabpreco; i++){
																
											if (strcmp(pesqmarca,tabpreco[i].marca) == 0){
												flag1 = 1;
												indexaux = i;
											}
										}
										
										if (flag1 == 0){										
											strcpy(tabpreco[indextabpreco].marca,pesqmarca); 
											printf("\nPRECO: ");										
											scanf("%f",&tabpreco[indextabpreco].preco);
										}
										else
										{
											printf("\nPRECO ATUALIZADO: ");
											scanf("%f",&tabpreco[indexaux].preco);
										}
									}
									
									printf("\n\nCONTINUAR CADASTRO? (1)-SIM  (2)-NAO\n");
									printf("Op: ");
									scanf("%i",&op4);
									
									indextabpreco ++;
									
								}while (op4 != 2);								
								
								break;
								
					case 4:
												
								do{
									flag1=0;
									system("cls");
									printf("-REALIZAR ALUGUEL VEICULO-\n\n");
									printf("\nINFORME CNH CLIENTE: ");
									scanf("%i",&pesqnumcnh);
																	
									for (i=0; i< ind1; i++){
																				
										if (pesqnumcnh == cadcli[i].numcnh){
											flag1 = 1;
											indexauxcli = i;
										}
									}
									
									if (flag1 == 0){										
										printf("\nCNH NAO CADASTRADA!\n");	
										system("pause");
									}
									else
									{
										
										printf("\nINFORME MODELO: ");
										fflush(stdin);
										gets(pesqmodelo);
										strupr(pesqmodelo);
										flag1=0;				
																
										for (i=0; i< ind; i++){							
											if (strcmp(pesqmodelo,cadcar[i].modelo) == 0){
												flag1 = 1;
												indexauxmodelo = i;
												printf("\nMARCA: %s",cadcar[i].marca);
											}
										}
										
										if (flag1 == 0){										
											printf("\nMODELO DE VEICULO NAO CADASTRADO, CADASTRAR VEICULO!\n");
											system("pause");
											
										}
										else
										{
											printf("\n\nINFORME MARCA: ");
											fflush(stdin);
											gets(pesqmarca);
											
											flag1=0;										
											for (i=0; i< ind; i++){
												strupr(pesqmarca);
																						
												if (strcmp(pesqmarca,cadcar[i].marca) == 0){
													flag1 = 1;
													indexauxmarca = i;
													printf("\nMARCA: %s",cadcar[i].marca);
												}
											}
											
											if (flag1 == 0){										
												printf("\nMARCA DE VEICULO NAO CADASTRADO!\n");
												system("pause");
												
											}
											else
											{
												flag1=0;
												for (i=0; i< indextabpreco; i++){											
																						
													if (strcmp(pesqmarca,tabpreco[i].marca) == 0){
														flag1 = 1;
														indexauxmarcatabpreco = i;
													}
												}
												
												if (flag1 == 0){										
													printf("\nTABELA DE PRECO NAO CADASTRADO PARA O VEICULO!\n");	
													system("pause");
													
												}
												else
												{
													if (cadcar[indexauxmarca].quant < 1){														
														printf("\n\nMARCA DE VEICULO INDISPONIVEL!\n");
														system("pause");
													}
													else
													{
													
														printf("\nVALOR ALUGUEL DO VEICULO: %2.f",tabpreco[indexauxmarcatabpreco].preco);	
														printf("\nMARCA: %s",tabpreco[indexauxmarcatabpreco].marca);
														printf("\n\nHORAS ALUGADAS: ");
														scanf("%i",&horasalugadas);
														valortotal=horasalugadas*tabpreco[indexauxmarcatabpreco].preco;
														printf("\n\nVALOR TOTAL: %.2f",valortotal);
														printf("\nVALOR PAGO: ");
														scanf("%f",&valorpago);
														
														if (valorpago<valortotal){
															printf("\nVALOR PAGO INFERIOR AO TOTAL!\n");
															system("pause");
														}
														else
														{
															cadcar[indexauxmarca].quant --;
															
															valortroco = valorpago-valortotal;
															
															printf("\nTROCO: %.2f\n",valortroco);	
															system("pause");															
														}
													}
													
												}
											}
										}
									}
								
									printf("\n\nDESEJA CONTINUAR O ALUGUEL? (1)-SIM (2)-NAO\n");
									scanf("%i",&op4);
									
								}while (op4 != 2);
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
		
		
	}while(op1!=0);


	system("pause");
}

