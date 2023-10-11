#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]){
	int operacao, opcao;
	float numero1, numero2, total;

	opcao=1;

	while(opcao==1){
		printf("Qual operacao voce deseja fazer \n Divisao:1 \n Multiplicacao:2 \n Adicao:3 \n Subtracao:4");
		scanf("%d", operacao);
		printf("Digite um numero:");
		scanf("%f" , numero1);
		printf("Digite outro numero:");
		scanf ("%f", numero2);

		switch(operacao){
			case 1:
				total = numero1 / numero2;
				break;

			case 2:
				total = numero1 * numero2;
				break;
			case 3:
				total = numero1 + numero2;
				break;
			case 4:
				total = numero1 - numero2;
				break;
		}
		printf("Total da Sua operacao: %.2f", total);
		printf("Se quiser encerrar digite 0,caso queira continuar digite 1");
		scanf("%d", opcao);
	}
	return 0;
}

