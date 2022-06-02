#include <stdio.h>
#include<string.h>

main()
{
  char verbe[20]; /*chaine contenant le verb*/
  char AFFI[30]; /*chaine pour l'affichage*/
  int L; /*longeur de la chaine*/

   do
   {
       printf("\n verbe:  ");
       scanf("%s", verbe);
       L=strlen(verbe);
 
       /*couper la temination 'er'*/
   }while((verbe[L-2]!='e') || (verbe[L-1]!='r'));
      
       printf("verbe: %s\n", verbe);
       
       printf("Je %*.*se\n",2,L-2,verbe);
       printf("Tu %*.*ses\n",2,L-2,verbe);
       printf("Il %*.*se\n",2,L-2,verbe);
       printf("Nous %*.*sons\n",2,L-2,verbe);
       printf("Vous %*.*sez\n",2,L-2,verbe);
       printf("Ils %*.*sent\n",2,L-2,verbe);  
}
