#include <stdio.h>
int main()
{
	int num;
	int calculo;

	printf("Digite um número: ");
	scanf("%i", &num);
	
	if(num > 50){
		calculo = num/2;
		printf("o resultado do calculo do %i e igual a %i", num, calculo);
	}
	else{
		printf("O numero nao e suficiente para fazer o calculo.");
	}
	return 0;
}
