#include <stdio.h>

#ifndef DATE_H
#define DATE_H
typedef struct Date
{   int jour;
    int mois;
    int an;
}Date_t; 

// fonctions
//fonction de la date
void AfficherDate(Date_t D);
void SaisirDate(Date_t *D);// pointeur quand je veux modifier
void AfficherTabDate(int taille, Date_t TAB[]);

#endif
