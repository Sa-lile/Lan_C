#include <stdio.h>


main()
{
   int nb=3; //idealement a saisir

   int i;
   int j;
  //1ere ligne
   printf(" \t| ");
   for (i=0; i<=nb; i++)//colonnes
      printf("%d \t",i);
      printf("\n");
      
   // ligne de tiret
   for (i=0; i<=nb; i++)//colonnes
      printf("-------\t",i);
      printf("\n");
     
   for (i=0; i<nb ; i++) //colonnes
     { 
      // en debut de ligne
      printf(" %d\t", i);
        for (j = 0; j<=nb; j++)//ligne
        printf(" %d \t", i*j);
      // à la fin de la ligne je saute une ligne
      printf("\n");
     }


}