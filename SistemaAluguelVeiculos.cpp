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
		printf("==============================================\n");
      	printf("=             AJR ALUGUEL DE CARROS          \n");
      	printf("=                                            \n");
		printf("=                 Login: ");
		fflush(stdin);
		gets(login);
		printf("=                 Senha: ");
		scanf("%i",&senha);
		printf("=                                            \n");
		printf("==============================================\n");
		
		if (strcmp( strupr(login), g1login)==0 && (senha == g1senha))
		{
			do
			{
				system("cls");
				printf("==============================================\n");
		      	printf("=             AJR ALUGUEL DE CARROS          \n");
		      	printf("=                                            \n");
				printf("=             1.Cadastrar Carro\n");
				printf("=             2.Cadastrar Cliente\n");
				printf("=             3.Cadastrar Tabela Preco\n");
				printf("=             4.Realizar Aluguel\n");
				printf("=             0-Sair\n");
				printf("=     --->    ");
				scanf("%i",&op2);
				printf("=                                            \n");
				printf("==============================================\n");
				
				system("cls");
				switch (op2){
					
					case 0:		
						exit(0);
						
						break;								
								
					case 1:
							do{
									
									system("cls");
									printf("==============================================\n");
							      	printf("=         AJR ALUGUEL DE CARROS          \n");
							      	printf("=                                        \n");
									printf("=         -CADASTRO DE CARROS-\n\n");
									printf("=MODELO: ");
									fflush(stdin);
									gets(cadcar[ind].modelo);
									strupr(cadcar[ind].modelo);
									printf("=MARCA: ");
									fflush(stdin);
									gets(pesqmarca);
									strupr(pesqmarca);
									
									for (i=0; i< ind; i++){
															
										if (strcmp(pesqmarca,cadcar[i].marca) == 0){
											flag1 = 1;
											indexaux = i;											
										}
									}
									
									if (flag1 == 0){
										
										strcpy(cadcar[ind].marca,pesqmarca);
										strupr(cadcar[ind].marca);																		
										printf("=QUANTIDADE: ");
										scanf("%i",&cadcar[ind].quant);
										ind++;
									}
									else
									{									
																												
										printf("=QUANTIDADE: ");
										scanf("%i",&cadcar[indexaux].quant);
										printf("\n==============================================\n");									
									}								
																			
										system("cls");
										printf("==========================================\n");
								      	printf("=\tAJR ALUGUEL DE CARROS          \n");
										printf("\n=\t-CADASTRO DE CARROS-\n");
										printf("\n=CADASTRO EFETIVADO COM SUCESSO\n");
										printf("\n==========================================\n");
										printf("\n=DESEJA CONTINUAR CADASTRANDO?");										
										printf("\n=\t1 - Continuar");
										printf("\n=\t0 - Sair\n");
										printf("=\t--->");									
										scanf("%i",&op3);
										printf("\n==============================================\n");									
										
								}while(op3!=0);
								break;
								
					case 2:
							do{							
								
								system("cls");
								printf("==========================================\n");
								printf("=\tAJR ALUGUEL DE CARROS          \n");
								printf("\n=\t-CADASTRO DE CLIENTES-\n\n");
								printf("\n=NOME: ");
								fflush(stdin);
								gets(cadcli[ind1].nome);
								printf("\n=CNH: ");
								scanf("%i",&cadcli[ind1].numcnh);
								
								ind1++;
								system("cls");
								printf("==========================================\n");
								printf("=\tAJR ALUGUEL DE CARROS          \n");
								printf("=\t-CADASTRO DE CLIENTE-\n");
								printf("\n=CADASTRO EFETIVADO COM SUCESSO\n");
								printf("\n==========================================\n");
								printf("\n=DESEJA CONTINUAR CADASTRANDO?");										
								printf("\n=\t1 - Continuar");
								printf("\n=\t0 - Sair\n");
								printf("=\t--->");
								scanf("%i",&op3);
								
							}while(op3!=0);
							break;		
					
					case 3:
								do{
									flag1=0;
									system("cls");
									printf("==========================================\n");
									printf("=\tAJR ALUGUEL DE CARROS          \n");
									printf("=\t-CADASTRO TABELA PRECO-\n\n");
									printf("\n=MARCA: ");
									fflush(stdin);
									gets(pesqmarca);
									strupr(pesqmarca);
									for (i=0; i< ind; i++){
															
										if (strcmp(pesqmarca,cadcar[i].marca) == 0){
											flag1 = 1;											
										}
									}
									
									if (flag1 == 0){
										system("cls");
										printf("==========================================\n");
										printf("=\tAJR ALUGUEL DE CARROS          \n");
										printf("=\t-CADASTRO TABELA PRECO-\n\n");										
										printf("\n=  MARCA DE VEICULO NAO CADASTRADO, CADASTRAR VEICULO!\n");
										printf("\n==============================================\n");
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
											printf("\n=PRECO: ");										
											scanf("%f",&tabpreco[indextabpreco].preco);
										}
										else
										{
											printf("\n=PRECO ATUALIZADO: ");
											scanf("%f",&tabpreco[indexaux].preco);
										}
									}
									system("cls");
									printf("==========================================\n");
									printf("=\tAJR ALUGUEL DE CARROS          \n");
									printf("=\t-CADASTRO TABELA PRECO-\n\n");
									printf("\n=CONTINUAR CADASTRO? (1)-SIM  (2)-NAO\n");
									printf("=Op: ");
									scanf("%i",&op4);
									printf("\n==============================================\n");
									indextabpreco ++;
									
								}while (op4 != 2);								
								
								break;
								
					case 4:
												
								do{
									flag1=0;
									system("cls");
									printf("\n==============================================\n");
									printf("=\tAJR ALUGUEL DE CARROS          \n");
									printf("=\t-REALIZAR ALUGUEL VEICULO-\n\n");
									printf("=INFORME CNH CLIENTE: ");
									scanf("%i",&pesqnumcnh);
																	
									for (i=0; i< ind1; i++){
																				
										if (pesqnumcnh == cadcli[i].numcnh){
											flag1 = 1;
											indexauxcli = i;
										}
									}
									
									if (flag1 == 0){							
										printf("\n==============================================\n");
										printf("=\tAJR ALUGUEL DE CARROS          \n");			
										printf("=\t-REALIZAR ALUGUEL VEICULO-\n");
										printf("\n=  CNH NAO CADASTRADA!\n");	
										printf("\n==============================================\n");
										system("pause");
									}
									else
									{
										
										printf("\n=INFORME MODELO: ");
										fflush(stdin);
										gets(pesqmodelo);
										strupr(pesqmodelo);
										flag1=0;				
																
										for (i=0; i< ind; i++){							
											if (strcmp(pesqmodelo,cadcar[i].modelo) == 0){
												flag1 = 1;
												indexauxmodelo = i;
												printf("\n= ---> MARCA: %s",cadcar[i].marca);
											}
										}
										
										if (flag1 == 0){	
											system("cls");									
											printf("\n==============================================\n");
											printf("=\tAJR ALUGUEL DE CARROS          \n");			
											printf("=\t-REALIZAR ALUGUEL VEICULO-\n");
											printf("\n   MODELO DE VEICULO NAO CADASTRADO, CADASTRAR VEICULO!\n");
											printf("\n==============================================\n");
											system("pause");
											
										}
										else
										{
											printf("\n\n=INFORME MARCA: ");
											fflush(stdin);
											gets(pesqmarca);
											
											flag1=0;										
											for (i=0; i< ind; i++){
												strupr(pesqmarca);
																						
												if (strcmp(pesqmarca,cadcar[i].marca) == 0){
													flag1 = 1;
													indexauxmarca = i;
													//printf("\nMARCA: %s",cadcar[i].marca);
												}
											}
											
											if (flag1 == 0){		
												system("cls");				
												printf("\n==============================================\n");
												printf("=\tAJR ALUGUEL DE CARROS          \n");			
												printf("=\t-REALIZAR ALUGUEL VEICULO-\n");				
												printf("\n=  MARCA DE VEICULO NAO CADASTRADO!\n");
												printf("\n==============================================\n");
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
													system("cls");
													printf("\n==============================================\n");
													printf("=\tAJR ALUGUEL DE CARROS          \n");			
													printf("=\t-REALIZAR ALUGUEL VEICULO-\n");				
													printf("\n=  TABELA DE PRECO NAO CADASTRADO PARA O VEICULO!\n");	
													printf("\n==============================================\n");
													system("pause");
													
												}
												else
												{
													if (cadcar[indexauxmarca].quant < 1){					
														system("cls");
														printf("\n==============================================\n");
														printf("=\tAJR ALUGUEL DE CARROS          \n");			
														printf("=\t-REALIZAR ALUGUEL VEICULO-\n");				
														printf("\n\n=  MARCA DE VEICULO INDISPONIVEL!\n");
														printf("\n==============================================\n");
														system("pause");
													}
													else
													{
													
														printf("\n=VALOR ALUGUEL DO VEICULO: %2.f",tabpreco[indexauxmarcatabpreco].preco);	
														printf("\n=MARCA: %s",tabpreco[indexauxmarcatabpreco].marca);
														printf("\n\n=HORAS ALUGADAS: ");
														scanf("%i",&horasalugadas);
														valortotal=horasalugadas*tabpreco[indexauxmarcatabpreco].preco;
														printf("\n\n=VALOR TOTAL: %.2f",valortotal);
														printf("\n=VALOR PAGO: ");
														scanf("%f",&valorpago);
														
														if (valorpago<valortotal){
															printf("\n=VALOR PAGO INFERIOR AO TOTAL!\n");
															system("pause");
														}
														else
														{
															cadcar[indexauxmarca].quant --;
															
															valortroco = valorpago-valortotal;
															
															printf("\n=TROCO: %.2f\n",valortroco);	
															printf("\n==============================================\n");
															system("pause");															
														}
													}
													
												}
											}
										}
									}
									system("cls");
									printf("\n==============================================\n");
									printf("=\tAJR ALUGUEL DE CARROS          \n");
									printf("=\t-REALIZAR ALUGUEL VEICULO-\n");
									printf("\n\n=  DESEJA CONTINUAR O ALUGUEL? (1)-SIM (2)-NAO\n");
									printf("\n==============================================\n");
									scanf("%i",&op4);
									
								}while (op4 != 2);
								break;					
											
					
					default: 	
						printf("\n==============================================\n");
						printf("=\tAJR ALUGUEL DE CARROS          \n");
						printf("\n\n=     Opcao Invalida!\n\n") ;
						printf("\n==============================================\n");
						system("pause");
						break;
								
				}
				
			}while(op2!=0); 
		}		
		else
		{
			system("cls");
			printf("=             AJR ALUGUEL DE CARROS          \n");
      		printf("=                                            \n");
			printf("=                Deseja sair?\n");
			printf("=                   0-Sim\n");
			printf("=                   1-Nao\n");
			printf("=              --->");
			scanf("%i",&op2);
			printf("=                                            \n");
			printf("==============================================\n");
			if (op2==0)
			{	
				return 0;
			}
		}
		
		
	}while(op1!=0);


	system("pause");
}

