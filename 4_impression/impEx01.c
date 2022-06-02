#include <stdio.h>


int main()
{
 char*chaine="Bonjour Nina";/*chaine de longueur12*/

 /*les points d'exclamation servent à délimiter les zones d'impression*/
 printf("!%s!\n",chaine);
 printf("!%*s!\n",6,chaine);
 printf("!%*.*s!\n",6,2,chaine);
 printf("!%10s!\n",chaine);
 printf("!%.10s!\n",chaine);
 printf("!-%10s!\n",chaine);
 printf("!%.18s!\n",chaine);
 printf("!%-18s!\n",chaine);
 printf("!%18.12s!\n",chaine);
 printf("!%-18.12s!\n",chaine);
 
}
 