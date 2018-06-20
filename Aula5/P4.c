/*
 *  Adriano Junior
 *   11721EBI010
 */
 
#include <stdio.h>

int main(){
	char num[256];
	int n = 0, i;
	printf("Digite uma string: ");
	scanf("%s", (char*) &num);
	for(i=0; num[i]!='\0'; i++){
		if(num[i] >= '0' && num[i]<= '9'){
			n = n*10 + (num[i] - '0');
		}
	}
	printf("\n%d\n", n);
	return 0;
}
