#include <stdio.h>
#include<locale.h>

int main() {
	
    int num[10];
    int i, maior, menor,maiorIn,menorIn;

	setlocale(LC_ALL,"Portuguese_Brazil");

    for (i=0; i<10; i++) {
        printf("Digite um número: ");
        scanf("%d", &num[i]);
    }

    maior = num[0];
    menor = num[0];

    for (i = 0; i < 10; i++) {
    	
        if (num[i]>maior) {
            maior = num[i];
            maiorIn = i;
          
        }
        if (num[i]<menor) {
            menor = num[i];
            menorIn = i;
    
        }
    }

    printf("\nO menor valor é %d e seu índice é %d e o maior é %d e seu índice é %d \n",menor,menorIn,maior,maiorIn);

    return 0;
}
