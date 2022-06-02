#include <stdio.h>
#include "date.h"
#ifndef INGREDIENT_H
#define INGREDIENT_H

typedef struct ingredient
{
    char   nom[30];
    double poids; // poids exprimé en grammes
    double prixkg; //prix en euros
    Date_t DLC; //DLC =Date limite de consommation
} ingredient_t;

void AfficherIngredient(ingredient_t I);
void SaisirIngredient(ingredient_t *I);
void AfficherTabIngredient(const ingredient_t *Tab, int taille);
void SaisirTabIngredient(ingredient_t Tab[], int taille);

double Calcul(ingredient_t tab[], int taille);


#endif