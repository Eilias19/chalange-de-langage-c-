#include <stdio.h>
int som(int a,int b){
int resultat= a + b;
return resultat;
}
int main() {
    int a ,b;
    printf("veuillez entrer la valeur de a :");
    scanf("%d",&a);
    printf("veuillez entrer la valeur de b :");
    scanf("%d",&b);
    printf("la somme est : %d",som(a,b));

    return 0;
}
