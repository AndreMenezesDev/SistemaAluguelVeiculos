#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


char login[10], g1login[10], g2login[10], v1login[10], v2login[10], marcar1[10], modcar1[10], anocar1[4], chascar1[10], marcar2[10], modcar2[10], anocar2[4], chascar2[10], pesqchassi[10], nomecliente1[10], nomecliente2[10];
int senha, g1senha, g2senha, v1senha, v2senha, quantcar1, quantcar2, pesqcpf, cpfcliente1, cpfcliente2, qntvenda, donocar1, donocar2;
int op1, op2;
float valcar1, valcar2, valpago1, valtotal1, troco1, valpago2, valtotal2, troco2;
bool statuscar1, statuscar2;

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
		
		if (strcmp( strupr(login), g1login)==0 && (senha == g1senha) || (strcmp(strupr(login),strupr(g2login))==0 && (senha == g2senha)))
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
					case 1:
								printf("-CADASTRO DE CARROS-\n\n");
								printf("\nVALOR: ");
								scanf("%f",&valcar1);
								printf("\nQUANTIDADE: ");
								scanf("%i",&quantcar1);
								printf("\nMARCA: ");
								fflush(stdin);
								gets(marcar1);
								printf("\nMODELO: ");
								fflush(stdin);
								gets(modcar1);
								printf("\nANO: ");
								fflush(stdin);
								gets(anocar1);
								printf("\nCHASSI: ");
								fflush(stdin);
								gets(chascar1);
								statuscar1=false;
								
								system("cls");
								printf("-CADASTRO DE CARROS-\n\n");
								printf("\nVALOR: ");
								scanf("%f",&valcar2);
								printf("\nQUANTIDADE: ");
								scanf("%i",&quantcar2);
								printf("\nMARCA: ");
								fflush(stdin);
								gets(marcar2);
								printf("\nMODELO: ");
								fflush(stdin);
								gets(modcar2);
								printf("\nANO: ");
								fflush(stdin);
								gets(anocar2);
								printf("\nCHASSI: ");
								fflush(stdin);
								gets(chascar2);
								statuscar2=false;
								
								break;
					
					case 2:
								printf("-CADASTRO DE VENDEDOR-\n\n");
								printf("\nNOME: ");
								fflush(stdin);
								gets(v1login);
								printf("\nMATRICULA: ");
								scanf("%i",&v1senha);
								
								system("cls");
								printf("-CADASTRO DE VENDEDOR-\n\n");
								printf("\nNOME: ");
								fflush(stdin);
								gets(v2login);
								printf("\nMATRICULA: ");
								scanf("%i",&v2senha);
								
								
								break;			
					
					case 3:
								printf("-PESQUISA DE CHASSI-\n\n");
								printf("\nPESQUISAR CHASSI: ");
								fflush(stdin);
								gets(pesqchassi);
								
								if (strcmp(strupr(pesqchassi),strupr(chascar1))==0)
								{
									
									printf("\nVALOR: %.2f",valcar1);
									printf("\nQUANTIDADE: %i",quantcar1);
									printf("\nMODELO: %s",modcar1);
									printf("\nANO: %s",anocar1);
									printf("\nCHASSI: %s",chascar1);
									
									if (statuscar1 == true)
										printf("\nCARRO VENDIDO PARA O CPF: %i",donocar1);
																			
									else
										printf("\nCARRO NO PATIO\n\n");
								}
								else if (strcmp(strupr(pesqchassi),strupr(chascar2))==0)
									{
										
										printf("\nVALOR: %.2f",valcar2);
										printf("\nQUANTIDADE: %i",quantcar2); 
										printf("\nMODELO: %s",modcar2);
										printf("\nANO: %s",anocar2);
										printf("\nCHASSI: %s",chascar2);
										
										if (statuscar2 == true)
											printf("\nCARRO VENDIDO PARA O CPF: %i",donocar2);
																				
										else
											printf("\nCARRO NO PATIO\n\n");
									}
								
								
								system("pause");
								break;
					
					case 0:		op2=0;
								break;						
					
					default: 	printf("Opcao Invalida!\n\n") ;
								break;
								
				}
				
			}while(op2!=0); 
		}
		else if ((strcmp(strupr(login),strupr(v1login))==0 && (senha == v1senha)) || (strcmp(strupr(login),strupr(v2login))==0 && (senha == v2senha)))
		{
			do
			{
				system("cls");
				printf("1.Realizar Venda\n");
				printf("2.Cadastrar Cliente\n");
				printf("3.Gerar NFE\n");
				printf("0-Sair\n");
				scanf("%i",&op2);
				
				switch (op2){
					case 1:
								printf("-REALIZAR VENDA-\n\n");
								
								valtotal1=0;
								troco1=0;
								
								printf("\nPESQUISAR CHASSI: ");
								fflush(stdin);
								gets(pesqchassi);								
								
								if (strcmp(strupr(pesqchassi),strupr(chascar1))==0){
									
									printf("\nVALOR: %.2f",valcar1);
									printf("\nQUANTIDADE: %i",quantcar1);
									printf("\nMODELO: %s",modcar1);
									printf("\nANO: %s",anocar1);
									printf("\nCHASSI: %s",chascar1);
									
									
									printf("\n\nCPF CLIENTE: ");
									scanf("%i",&pesqcpf);
										
										if (pesqcpf == cpfcliente1)
										{
											printf("\nQUANTIDADE SOLICITADA: ");
											scanf("%i",&qntvenda);
											
											if (qntvenda <= quantcar1)
											{
												valtotal1=(qntvenda*valcar1);
												printf("\nVALOR TOTAL: %.2f",valtotal1);
												printf("\nVALOR TOTAL PAGO: ");
												scanf("%f",&valpago1);
												
												troco1=valpago1-valtotal1;
												printf("\n\nTROCO: %.2f\n\n",troco1);
												quantcar1 = quantcar1 - qntvenda;
												statuscar1 = true;
												donocar1 = cpfcliente1;
												system("pause");
											}
											else{
												printf("\nQUANTIDADE INSUFICIENTE NO PATIO\n");
												system("pause");
											}
										}
										else if (pesqcpf == cpfcliente2)
											{
												printf("\nQUANTIDADE SOLICITADA: ");
												scanf("%i",&qntvenda);
												
												if (qntvenda <= quantcar1)
												{
													valtotal2=(qntvenda*valcar1);
													printf("\nVALOR TOTAL: %.2f",valtotal2);
													printf("\nVALOR TOTAL PAGO: ");
													scanf("%f",&valpago1);
													
													troco2=valpago2-valtotal2;
													printf("\n\nTROCO: %.2f\n\n",troco2);
													quantcar1 = quantcar1 - qntvenda;
													statuscar1 = true;
													donocar1 = cpfcliente2;
													system("pause");
												}
												else{
												printf("\nQUANTIDADE INSUFICIENTE NO PATIO\n");
												system("pause");
											}
											}
											else
											{
												printf("\n\nCLIENTE INEXISTENTE!\n\n");
												system("pause");
											}
									
									}								
								else if (strcmp(strupr(pesqchassi),strupr(chascar2))==0){
								
									printf("\nVALOR: %.2f",valcar2);
									printf("\nQUANTIDADE: %i",quantcar2);
									printf("\nMODELO: %s",modcar2);
									printf("\nANO: %s",anocar2);
									printf("\nCHASSI: %s",chascar2);
									
									printf("\n\nCPF CLIENTE: ");
									scanf("%i",&pesqcpf);
										
										if (pesqcpf == cpfcliente1)
										{
											printf("\nQUANTIDADE SOLICITADA: ");
											scanf("%i",&qntvenda);
											
											if (qntvenda <= quantcar2)
											{
												
												valtotal2=qntvenda*valcar2;
												printf("\nVALOR TOTAL: %.2f",valtotal2);
												printf("\nVALOR TOTAL PAGO: ");
												scanf("%f",&valpago2);
												
												troco2=valpago2-valtotal2;
												printf("\n\nTROCO: %.2f",troco2);
												quantcar2 = quantcar2 - qntvenda;
												statuscar2 = true;
												donocar2 = cpfcliente1;
											}
										}
										else if (pesqcpf == cpfcliente2)
											{
												printf("\nQUANTIDADE SOLICITADA: ");
												scanf("%i",&qntvenda);
												
												if (qntvenda <= quantcar2)
												{
													printf("\nVALOR TOTAL: %i",qntvenda*valcar2);
													printf("\nVALOR TOTAL PAGO: ");
													scanf("%f",&valpago2);
													
													printf("\n\nTROCO: %f",valpago2-(qntvenda*valcar2));
													quantcar2 = quantcar2 - qntvenda;
													statuscar2 = true;
													donocar2 = cpfcliente2;
												}
											}
											else
											{
												printf("\n\nCLIENTE INEXISTENTE!\n\n");
												system("pause");
											}
									}								
								else								{
									printf("\n\nCHASSI INEXISTENTE!\n\n");
									system("pause");
								}
								break;
					
					case 2:
								system("cls");
								printf("-CADASTRO CLIENTE [1.2]-\n\n");
								printf("\nNOME CLIENTE: ");
								fflush(stdin);
								gets(nomecliente1);
								printf("\nCPF: ");
								scanf("%i",&cpfcliente1);
								
								system("cls");
								printf("-CADASTRO CLIENTE [2.2]-\n\n");
								printf("\nNOME CLIENTE: ");
								fflush(stdin);
								gets(nomecliente2);
								printf("\nCPF: ");
								scanf("%i",&cpfcliente2);
																
								break;			
					
					case 3:
								printf("-GERAR NOTA FISCAL ELETRONICA-\n\n");
								
								printf("\nCPF CLIENTE: ");
								scanf("%i",&pesqcpf);
								
								if (pesqcpf == cpfcliente1) 
								{
									if (pesqcpf == donocar1)
									{									
										system("cls");
										printf("-----NOTA FISCAL ELETRONICA----\n\n");
										printf("\nNOME: %s",nomecliente1);
										printf("\nCPF: %i",cpfcliente1);
										printf("\nMODELO: %s",modcar1);
										printf("\nMARCA: %s",marcar1);
										printf("\nCHASSI: %s",chascar1);
										
										printf("\n\n...IMPRIMINDO...");
										system("pause");
										
									}
									else if (pesqcpf == donocar2)
										{									
											system("cls");
											printf("-----NOTA FISCAL ELETRONICA----\n\n");
											printf("\nNOME: %s",nomecliente1);
											printf("\nCPF: %i",cpfcliente1);
											printf("\nMODELO: %s",modcar2);
											printf("\nMARCA: %s",marcar2);
											printf("\nCHASSI: %s",chascar2);
											
											printf("\n\n...IMPRIMINDO...");
											system("pause");
										}
								}
								else if (pesqcpf == cpfcliente2)
										{
											if (pesqcpf == donocar1)
											{									
												system("cls");
												printf("-----NOTA FISCAL ELETRONICA----\n\n");
												printf("\nNOME: %s",nomecliente2);
												printf("\nCPF: %i",cpfcliente2);
												printf("\nMODELO: %s",modcar1);
												printf("\nMARCA: %s",marcar1);
												printf("\nCHASSI: %s",chascar1);
												printf("\n\n...IMPRIMINDO...");
												system("pause");
											}
											else if (pesqcpf == donocar2)
												{									
													system("cls");
													printf("-----NOTA FISCAL ELETRONICA----\n\n");
													printf("\nNOME: %s",nomecliente2);
													printf("\nCPF: %i",cpfcliente2);
													printf("\nMODELO: %s",modcar2);
													printf("\nMARCA: %s",marcar2);
													printf("\nCHASSI: %s",chascar2);
													printf("\n\n...IMPRIMINDO...");
													system("pause");
												}
										}
									else
									{
										printf("\nCPF INEXISTENTE!\n\n");
										system("pause");
									}
								
								break;
					
					case 0:		op2=0;
								break;						
					
					default: 	printf("\n\nOpcao Invalida!\n\n");
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

