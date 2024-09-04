#include <stdio.h>
int max(int a,int b){
int resultat;
if(a>b){
    resultat=a;
}else{
    resultat=b;
}
return resultat;
}
int main() {
    int a ,b;
    printf("veuillez entrer la valeur de a :");
    scanf("%d",&a);
    printf("veuillez entrer la valeur de b :");
    scanf("%d",&b);
    printf("le maximum est : %d",max(a,b));

    return 0;
}
