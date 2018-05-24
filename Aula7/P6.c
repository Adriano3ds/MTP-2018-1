/*
 *  Adriano Junior
 *   11721EBI010
 */

#include <stdio.h>

int soma(int *start, int size){
    return (*start) + ( (start==start+size) ? 0 : soma(start+1, size-1));
}

float divide(int a, int b){
    return (float)a/b;
}

int main(){
    int num[20] = {0}, s=0, i;
    while(s<5 || s>10){
        printf("\nDigite o numero de elementos: ");
        scanf("%d", &s);
        getchar();
    }
    int *ptr1 = num;
    for(i=0; i<s; i++){
        printf("\nDigite o elemento %d: ", i+1);
        scanf("%d", &num[i]);
        getchar();
    }
    printf("\nmedia = %.2f\n", divide(soma(ptr1, s),s));
    return 0;
}
