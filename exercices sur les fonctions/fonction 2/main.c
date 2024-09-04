#include <stdio.h>
int multiple(int a,int b){
int resultat= a * b;
return resultat;
}
int main() {
    int a ,b;
    printf("veuillez entrer la valeur de a :");
    scanf("%d",&a);
    printf("veuillez entrer la valeur de b :");
    scanf("%d",&b);
    printf("la multiplication est : %d",multiple(a,b));

    return 0;
}
