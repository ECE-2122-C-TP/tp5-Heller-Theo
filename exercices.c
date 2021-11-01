#include "fonctions.h"
#include <stdio.h>

void exercice1() {
    NombreRationnel nombre1 = {0,0}, nombre2={0,0};
    nombre1 = saisirNombreRationnel();
    nombre2 = saisirNombreRationnel();
    printf("Le premier rationnel est: ");
    afficherNombreRationnel( nombre1 );
    printf("Le second rationnel est: ");
    afficherNombreRationnel( nombre2 );
    printf("La somme des deux est: ");
    afficherNombreRationnel( simplification( additionRationnel(nombre1, nombre2) ) );
    printf("Le produit des deux est: ");
    afficherNombreRationnel( simplification( multiplicationRationnel(nombre1, nombre2) ) );
    return;
}


#define NOMBRE_MAX 100

void exercice2() {
    int i = 0;
    int N = 0; // taille logique du tableau
    int tableau[NOMBRE_MAX] = {0};

    do {
        printf("Combien d'entiers voulez vous inserer dans le tableau ?\n");
        scanf(" %d", &N);
    } while (N < 0 || N > NOMBRE_MAX);

    for (i = 0; i < N; ++i) {
        tableau[i] = saisirEntier();
    }

    if (N == 0) {
        printf("Le tableau est vide et n'a donc pas d'entier maximum.\n");
        return;
    }
    printf("L'entier maximum de ce tableau est %d.\n", maxTableau(tableau, N) );

    return;
}

#define NOMBRE_MAX1 3
#define NOMBRE_MAX2 4

void exercice3() {
    int i = 0, j = 0;
    int tableauDeuxDimensions[NOMBRE_MAX1][NOMBRE_MAX2] = {0};
    int tableauUneDimension[NOMBRE_MAX1 * NOMBRE_MAX2] = {0};

    printf("Saisissez les 12 entiers de votre tableau de taille %d*%d:\n", NOMBRE_MAX1, NOMBRE_MAX2);
    for (i = 0; i < NOMBRE_MAX1; i++) {
        for (j = 0; j < NOMBRE_MAX2; j++) {
            tableauDeuxDimensions[i][j] = saisirEntier();    //On initialise le tableau à deux dimensions
        }
    }

    for (i = 0; i < NOMBRE_MAX1; i++) {
        for (j = 0; j < NOMBRE_MAX2; j++) {
            tableauUneDimension[ i * (NOMBRE_MAX1+1) + j ] = tableauDeuxDimensions[i][j];   //On initialise le tableau à une dimension
        }
    }

    printf("Voila le tableau a une dimension dans lequel on a copie les valeurs du tableau a deux dimensions:\n");
    for (i = 0; i < NOMBRE_MAX1 * NOMBRE_MAX2; i++) {
        printf("%d ", tableauUneDimension[i]);                 //On affiche les éléments du tableau à une dimension.
    }
    printf("\n");

    return;
}

