#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano;
	
	printf("Informe o dia: ");
	scanf("%d", &dia);
	printf("Informe o mes(em numero): ");
	scanf("%d", &mes);
	printf("Informe o ano: ");
	scanf("%d", &ano);
	
	if(dia < 1 || mes < 1 || mes >= 13 || ano < 1){
		printf("\nData invalida!");
	}
	//meses com 31 dias
	if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia < 31 && dia >= 1 && mes >= 1 && mes < 13 && ano >= 1){
			printf("\nPróximo dia: %d/%d/%d", dia + 1, mes, ano);
	}
		else if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10) && dia == 31){
				printf("\nPróximo dia: 01/%d/%d", mes + 1, ano);
		}
			else if(mes == 12 && dia == 31){
				printf("\nPróximo dia: 01/01/%d", ano + 1);
			}	
				
	//fevereiro
	if(mes == 2 && ((ano % 4) != 0) && dia >= 29 || mes == 2 && ((ano % 4) == 0) && dia > 29){
		printf("\nData invalida!");
	}
	else if(mes == 2 && dia < 28 && dia >= 1 && ano >= 1){
		printf("\nPróximo dia: %d/0%d/%d", dia + 1, mes, ano);
	} 
		else if(mes == 2 && dia >= 28 && (ano % 4) == 0 && dia < 29){
			printf("\nPróximo dia: %d/0%d/%d", dia + 1, mes, ano);
		}
			else if(mes == 2 && (ano % 4) == 0 && dia == 29){
				printf("\nPróximo dia: 01/0%d/%d", mes + 1, ano);
			}
				else if(mes == 2 && dia == 28){
					printf("\nPróximo dia: 01/0%d/%d", mes + 1, ano);
				}
	// mes com 30 dias			
	if((mes == 4 || mes == 6 ||mes == 9 || mes == 11) && dia < 30 && dia >= 1 && mes >= 1 && mes < 13 && ano >= 1){
			printf("\nPróximo dia: %d/%d/%d", dia + 1, mes, ano);
	}
		else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 30){
				printf("\nPróximo dia: 01/%d/%d", mes + 1, ano);
		}
			else if((mes == 4 || mes == 6 || mes == 9 || mes == 11)&& dia >= 31){
				printf("\nData invalida!");
			} 
	
	return 0;
}
