#include <stdio.h>


main()
{
   int nb=0;
   int i;
   int somme[11];

   printf("Choissez un nombre : ");
   scanf("%d",&nb);

   for (i=0; i<11; i++) 
   {
       somme[i] = nb*i;
       printf("\n%d X %d = %d",nb,i,somme[i]);
   
   }


}