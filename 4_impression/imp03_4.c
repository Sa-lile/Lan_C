#include <stdio.h>
#include <string.h>
main()
{
  int jour;
  char mois[20];
  int an;

  /*saisie 14 Decembre 1974 */
  printf(" écrivez le jour mois an\n");
  scanf("%d  %s  %d", &jour, mois, &an);

  /*saisie 14 Dec 1974 */
  /*le mois saisie les 3 premières lettres*/ 
   printf("%d  %.3s %d ", jour, mois, an);

}