/*
 * Adriano Junior
 *  11721EBI010
 */
#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float * vetor, int tam) {
	int i;
	for(i = 0; i < tam; i++)
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float soma(float *inicio_vetor, float *fim_vetor){
	return inicio_vetor == fim_vetor ? 0.0 : *inicio_vetor + soma(inicio_vetor+1, fim_vetor);
}

float produto(float *inicio_vetor, float *fim_vetor){
	return inicio_vetor == fim_vetor ? 1.0 : *inicio_vetor * produto(inicio_vetor+1, fim_vetor);
}


int main(){
	srand(123456);
	float *vet;
	vet = calloc(100, sizeof(float));
	gera_numeros(vet, 100);
	int opt=0;
	printf("%f", p);
	while(opt!=3){
		printf("\n1 - Somatorio\n2 - Produtorio\n3 - Sair\n> ");
		scanf("%d",&opt);
		getchar();
		
		switch(opt){
			case 1:
				printf("\nSoma: %f\n", soma(vet, vet+100));
				break;
			case 2:
				printf("\nProduto: %f\n", produto(vet, vet+100));
				break;
		}
	}
	printf("\nAte mais!\n");
	free(vet);
	return 0;
}
