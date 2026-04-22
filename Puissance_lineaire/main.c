#include <stdio.h>
#include <stdlib.h>

unsigned int count = 0;
unsigned int puissance_lineaire(unsigned int x, unsigned int n){
    printf("Appel %u ^ %u \n", x, n);

    if(n==0){
        printf("return 1\n");
        count++;
        return 1;
    }
    else{
        count++;
        printf("%u ^ %u = %u x %u ^ %u \n", x, n, x, x, (n-1));
        return x*puissance_lineaire(x, n-1);
    }
}

int main()
{
    puissance_lineaire(2, 10);
    printf("Nombres d'appels : %u", count);
    return 0;
}
