#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

void main () {
	float nmr1,nmr2,total;
	int operacao, opcao =1;
	 
	while(opcao==1){
		printf("Escolha sua Operacao: \nAdicao:1 \nSubtracao:2 \nDivisao:3 \nMultiPlicacao:4 \n");
		scanf("%d", &operacao);
		printf("Digite um numero:");
		scanf("%f", &nmr1);
		printf("Digite outro Numero:");
		scanf("%f", &nmr2);

		switch (operacao){
			case 1:
				total = Soma(nmr1,nmr2);
			break;

			case 2:
				total = Subtracao(nmr1,nmr2);
			break;

			case 3:
			while(nmr2==0){
				printf("Erro, nao e possivel dividir por 0\n");
				printf("Digite novamente um numero:");
				scanf("%f", &nmr2);
			}
				total = Divisao(nmr1,nmr2);
			break;

			case 4:
				total = Multiplicacao(nmr1,nmr2);
			break;
		}

		printf("Total da sua Operacao:%.2f \n", total);
		printf("\n Se deseja encerrar digite:0,caso queirar continuar digite:1 \n");
		scanf("%d", &opcao);
	}

}
