#include <stdio.h>
int main()
{
    int n;
    printf("veuillez entrez le nombre d'element :");
    scanf("%d",&n);
    int T[n];
    for(int i=0;i<n;i++)
        {
        printf("veuillez entrer l'element %d: ", i + 1);
        scanf("%d",&T[i]);
        }
    printf("Les elements du tableau sont:\n");
    for (int i =0;i<n;i++){
        printf("%d\n",T[i]);}
        return 0;
}
