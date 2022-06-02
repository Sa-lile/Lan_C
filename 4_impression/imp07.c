#include <stdio.h>
#include <string.h>

main()
{
   char lettre[20]={'N','I','N','A'};
   int nb ;  // nombre de lettre
   int i;
   int occurence = 0
// lettre est une chaine (cad un tableaude caractères) => %s ou une boucle
// lettre[i] est un caractère (char) => avec %c ou = ou !=
   printf("Entrez votre mot en majuscule\n");
   scanf("%s",lettre);
   nb=strlen(lettre);

  for (i=0; i<strlen(lettre); i++)
    {
     for (i=0; i<strlen(lettre); i++)
     {
      if ((lettre[i]==lettre[nb])
      {    // j'ai trouvé une occurence
       occurence++;
      }   

    printf("la lettre %c apparait %d fois\n", lettre[1], occurence)   
   }

   /*N I N a
    i->
   N I # a    # signifie que la déjà àté compté*/