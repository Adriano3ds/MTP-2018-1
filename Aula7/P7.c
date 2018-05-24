/*
 * Adriano Junior
 *  11721EBI010
 */

#include <stdio.h>

int ackermann(int m, int n){
    if(m==0) return n+1;
    if(m>0 && n==0) return ackermann(m-1,1);
    else if (m>0 && n>0) return ackermann(m-1, ackermann(m,n-1));
    return 0;
}

int main(){
    int a=-1,b=-1;
    while(a<0){
        printf("\nDigite o valor de m: ");
        scanf("%d", &a);
        getchar();
    }
    while(b<0){
        printf("Digite o valor de n: ");
        scanf("%d", &b);
        getchar();
    }
    printf("\nAckermann(%d, %d) = %d\n", a, b, ackermann(a,b));
    return 0;
}
