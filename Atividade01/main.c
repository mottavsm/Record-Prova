#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n, i, tempo, menorTempo;
	
	printf("Digite o número de corredores: ");
	scanf("%d", &n);
	
	menorTempo = 10000000;
	
	for (i = 0; i < n; i++) {
		printf("\tTempo corredor %d: ", (i+1));
		scanf("%d", &tempo);
		
		if (tempo < menorTempo) {
			menorTempo = tempo;
		}
	}
	
	printf("\nO recorde da prova foi de %d segundos.\n", menorTempo);
	
	return 0;
}

