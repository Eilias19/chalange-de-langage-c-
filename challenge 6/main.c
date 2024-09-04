#include <stdio.h>

int main() {
  int n,facteur;

   printf("veuillez entrer le nombre delement :");

   scanf("%d",&n);

   int T[100];

   printf("Entrez les element du tableau:\n");
   for(int i = 0; i<n ; i++ ){
       scanf("%d,&T[n]");
   }
   printf("veuillez Entrez le multiplicateur :");
   scanf("%d",&facteur);
   printf("Tableau avec multiplication :\n");
   for(int i =0;i<n;i++){
       T[i]*= facteur ;
       printf("%d \n",T[n]);
   }

    return 0;
}
