#include <stdio.h>
#include "structures.h"

NombreRationnel saisirNombreRationnel() {
    NombreRationnel nouveauNombreRationnel;
    printf("Numerateur :\n>");
    scanf("%d", &nouveauNombreRationnel.numerateur);
    printf("Denominateur :\n>");
    scanf("%d", &nouveauNombreRationnel.denominateur);
    return nouveauNombreRationnel;
}


void afficherNombreRationnel(NombreRationnel e) {
    printf("%d/%d \n", e.numerateur, e.denominateur);
}


NombreRationnel additionRationnel(NombreRationnel nbR1, NombreRationnel nbR2) {
    NombreRationnel nbR3 = {0, 0};
    nbR3.numerateur = nbR1.numerateur * nbR2.denominateur + nbR2.numerateur * nbR1.denominateur;
    nbR3.denominateur = nbR1.denominateur * nbR2.denominateur;
    return nbR3;
}


NombreRationnel multiplicationRationnel(NombreRationnel nbR1, NombreRationnel nbR2) {
    NombreRationnel nbR3 = {0, 0};
    nbR3.numerateur = nbR1.numerateur * nbR2.numerateur;
    nbR3.denominateur = nbR1.denominateur * nbR2.denominateur;
    return nbR3;
}


int pgcd(NombreRationnel nbR1) {
    int min = 0, pgcd1 = 0, i = 0;
    min = nbR1.numerateur < nbR1.denominateur ? nbR1.numerateur : nbR1.denominateur;
    for (i = 2; i <= min; i++) {     //On regarde jusqu'à l'entier le plus petit entre num et den quel nombre est leurs plus grand diviseur commun.
        if (nbR1.numerateur % i == 0 && nbR1.denominateur % i == 0) {
            pgcd1 = i;
        }
    }
    return pgcd1;
}


NombreRationnel simplification(NombreRationnel nbR1) {
    int pgcd1 = pgcd(nbR1);
    if (pgcd1 != 0) {
        nbR1.numerateur /= pgcd1;
        nbR1.denominateur /= pgcd1;
    }
    return nbR1;
}


int saisirEntier() {
    int entier = 0;
    printf("Saisissez un entier :\n>");
    scanf(" %d", &entier);
    return entier;
}


int maxTableau(int tableau[], int taille) {

    int max = tableau[0];   //Comme le tableau n'est pas vide à priori on initialise notre variable avec le premier element.

    for (int i = 0; i < taille; i++ ) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }
    return max;
}

