#include <stdio.h>
#include <stdlib.h>

unsigned int count=0;
unsigned int puissance_rapide(unsigned int x, unsigned int n){
    printf("Appel %u ^ %u \n", x, n);
    if(n==0){
        printf("return 1\n");
        count++;
        return 1;
    }
    else if(n%2==0){
        count ++;
        unsigned int temp = puissance_rapide(x, n/2);
        printf("%u^%u = (%u^%u) * (%u^%u) ", x, n, x, n/2, x, n/2);
        printf("avec %u^%u = %u \n", x, n/2, temp);
        return temp*temp;
    } else if(n%2==1){
        count ++;
        unsigned int temp = puissance_rapide(x, (n-1)/2);
        printf("%u^%u = %ux(%u^%u)*(%u^%u) ", x, n, x, x, (n-1)/2, x, (n-1)/2);
        printf("avec %u^%u = %u \n", x,(n-1)/2, temp);
        return x*temp*temp;
    } else{
        return -1;
    }
}


int main()
{
    unsigned int nombre, puissance;
    printf("Entrer le nombre : " );
    scanf("%u", &nombre);
    printf("\n");
    printf("Entrer la puissance : ");
    scanf("%u", &puissance);
    unsigned resultat = puissance_rapide(nombre, puissance);
    printf("\n%u^%u = %u\n", nombre, puissance, resultat);
    printf("Nombres d'appels : %u\n", count);
    return 0;
}
