#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano;
	
	printf("\n\n");
	printf("\t _______________________________________________\n");
	printf("\t|\t\t\t\t\t\t|");
	printf("\n\t|  Bem-vind@ a aplica��o da data seguinte em C \t|\n");
	printf("\t|\t\t\t\t\t\t|\n");
	printf("\n-> Informe o dia: ");
	scanf("%d", &dia);
	
	printf("-> Informe o m�s(em n�mero): ");
	scanf("%d", &mes);
	printf("-> Informe o ano: ");
	scanf("%d", &ano);
	printf("\n[Dia Informado]: %d/%d/%d", dia, mes, ano);
	
	switch(mes){
		case 1:{
			if(dia > 0 && dia < 31 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/0%d/%d", dia+1, mes, ano);
			}
				else if(dia == 31){
					printf("\n-> O pr�ximo dia: 01/0%d/%d", mes + 1, ano);
				}
					else if(dia < 0 || ano < 0 || dia > 31){
						printf(" [Data inv�lida!]");
					}
			break;
		}
		case 2:{
			if(dia > 0 && dia < 28 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/0%d/%d", dia+1, mes, ano);
			}
				else if((ano % 4) != 0 && dia == 28){
					printf("\n-> O pr�ximo dia: 01/0%d/%d", mes+1, ano);
				}
					else if((ano % 4) == 0 && dia == 28){
						printf("\n-> O pr�ximo dia: %d/0%d/%d", dia+1, mes, ano);
					}
						else if((ano % 4) == 0 && dia == 29){
							printf("\n-> O pr�ximo dia: 01/0%d/%d", mes+1, ano);
						}
							else if((ano % 4) != 0 && dia >= 29){
								printf("\n [Data inv�lida!]");
							}
								else if((ano % 4) == 0 && dia >= 29){
									printf("\n [Data inv�lida!]");
								}
					
			break;
		}
		case 3:{
			if(dia > 0 && dia < 31 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/0%d/%d", dia+1, mes, ano);
			}
				else if(dia == 31){
					printf("\n-> O pr�ximo dia: 01/0%d/%d", mes + 1, ano);
				}
					else if(dia < 0 || ano < 0 || dia > 31){
						printf("\n [Data inv�lida!]");
					}
			break;
		}
		case 4:{
			if(dia > 0 && dia < 30 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/0%d/%d", dia+1, mes, ano);
			}
				else if(dia == 30){
					printf("\n-> O pr�ximo dia: 01/0%d/%d", mes + 1, ano);
				}
					else if(dia < 0 || ano < 0 || dia > 30){
						printf("\n [Data inv�lida!]");
					}
			break;
		}
		case 5:{
			if(dia > 0 && dia < 31 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/0%d/%d", dia+1, mes, ano);
			}
				else if(dia == 31){
					printf("\n-> O pr�ximo dia: 01/0%d/%d", mes + 1, ano);
				}
					else if(dia < 0 || ano < 0 || dia > 31){
						printf("\n [Data inv�lida!]");
					}
			break;
		}
		case 6:{
			if(dia > 0 && dia < 30 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/0%d/%d", dia+1, mes, ano);
			}
				else if(dia == 30){
					printf("\n-> O pr�ximo dia: 01/0%d/%d", mes + 1, ano);
				}
					else if(dia < 0 || ano < 0 || dia > 30){
						printf("\n [Data inv�lida!]");
					}
			break;
		}
		case 7:{
			if(dia > 0 && dia < 31 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/0%d/%d", dia+1, mes, ano);
			}
				else if(dia == 31){
					printf("\n-> O pr�ximo dia: 01/0%d/%d", mes + 1, ano);
				}
					else if(dia < 0 || ano < 0 || dia > 31){
						printf("\n [Data inv�lida!]");
					}
			break;
		}
		case 8:{
			if(dia > 0 && dia < 31 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/0%d/%d", dia+1, mes, ano);
			}
				else if(dia == 31){
					printf("\n-> O pr�ximo dia: 01/0%d/%d", mes + 1, ano);
				}
					else if(dia < 0 || ano < 0 || dia > 31){
						printf("\n [Data inv�lida!]");
					}
			break;
		}
		case 9:{
			if(dia > 0 && dia < 30 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/0%d/%d", dia+1, mes, ano);
			}
				else if(dia == 30){
					printf("\n-> O pr�ximo dia: 01/%d/%d", mes + 1, ano);
				}
					else if(dia < 0 || ano < 0 || dia > 30){
						printf("\n [Data inv�lida!]");
					}
			break;
		}
		case 10:{
			if(dia > 0 && dia < 31 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/%d/%d", dia+1, mes, ano);
			}
				else if(dia == 31){
					printf("\n-> O pr�ximo dia: 01/%d/%d", mes + 1, ano);
				}
					else if(dia < 0 || ano < 0 || dia > 31){
						printf("\n [Data inv�lida!]");
					}
			break;
		}
		case 11:{
			if(dia > 0 && dia < 30 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/%d/%d", dia+1, mes, ano);
			}
				else if(dia == 30){
					printf("\n-> O pr�ximo dia: 01/%d/%d", mes + 1, ano);
				}
					else if(dia < 0 || ano < 0 || dia > 30){
						printf("\n [Data inv�lida!]");
					}
			break;
		}
		case 12:{
			if(dia > 0 && dia < 31 && ano > 0){
				printf("\n-> O pr�ximo dia: %d/%d/%d", dia+1, mes, ano);
			}
				else if(dia == 31){
					printf("\n-> O pr�ximo dia: 01/01/%d", ano+1);
				}
					else if(dia < 0 || ano < 0 || dia > 31){
						printf("\n [Data inv�lida!]");
					}
			break;
		}
		default:{
			printf("\n [Data inv�lida!]");
			break;
		}
	}
		
	return 0;
}

