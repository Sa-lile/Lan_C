#include <stdio.h>
#include "ingredient.h"
#ifndef PIZZA_H
#define PIZZA_H
#define MAXING 10
typedef struct Pizza
{
    char   nom[30]; //aucun soucis pour que cela s'appelle nom car pas d'ambiguité
    double prixvente;
    double prixrevient;
    //ingredient_t TabIng[];//MAL !!! oubligé de mettre une taille
    // astuce à retenir pour gérer des tableaux qui ne sont pas complétement remplis
    int nbing;// indique le nombr de cases singificatives dans mon tableau
    ingredient_t TabIng[MAXING];// pour changer à la volée la taille du tableau on utilise un #define
} Pizza_t;

void AfficherPizza(Pizza_t P);
void SaisirPizza(Pizza_t *P);
void SaisirTabPizza(Pizza_t *TAB, int taille);//* de tableau, pas de pointeru...
void AfficherTabPizza(const Pizza_t *TAB, int taille);//cconst pour pas modifer le tableau par erreur

#endif