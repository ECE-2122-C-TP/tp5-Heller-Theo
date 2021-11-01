#include "structures.h"

#ifndef TD5_THEO_HELLER_FONCTIONS_H
#define TD5_THEO_HELLER_FONCTIONS_H

//Exercice1
/* Fonction qui permet de saisir la structure NombreRationnel.
 * Paramètres :
 * - IN : aucun
 * - OUT : La structure NombreRationnel dont l'utilisateur a pu saisir chaque paramètre.*/
NombreRationnel saisirNombreRationnel();

/* Fonction qui permet d'afficher les éléments de la structure NombreRationnel.
 * Paramètres :
 * - IN : le NombreRationnel dont on veut afficher les éléments.
 * - OUT : aucun*/
void afficherNombreRationnel(NombreRationnel e);

/* Fonction qui permet d'additionner deux nombre rationnel grâce à la structure NombreRationnel.
 * Paramètres :
 * - IN : un NombreRationnel nbR1 et un NombreRationnel nbR2
 * - OUT : un NombreRationnel nbR3 qui correspond à l'addition de nbR1 et nbR2. */
NombreRationnel additionRationnel(NombreRationnel a, NombreRationnel b);

/* Fonction qui permet de multiplier deux nombre rationnel grâce à la structure NombreRationnel.
 * Paramètres :
 * - IN : un NombreRationnel nbR1 et un NombreRationnel nbR2
 * - OUT : un NombreRationnel nbR3 qui correspond au produit de nbR1 et nbR2.*/
NombreRationnel multiplicationRationnel(NombreRationnel a, NombreRationnel b);

/* Fonction qui permet de renvoyer le pgcd du numerateur et du dénominateur d'un nombre rationnel.
 * Paramètres :
 * - IN : Un NombreRationnel nbR1.
 * - OUT : Le pgcd du numérateur et du dénominateur de nbR1 et 0 s'il n'y en a pas. (entier)*/
int pgcd(NombreRationnel nbR1);

/* Fonction qui permet de simplifier au maximum un nombre rationnel.
 * Paramètres :
 * - IN : Un NombreRationnel nbR1.
 * - OUT : Un NombreRationnel simplifié au maximum.*/
NombreRationnel simplification(NombreRationnel nbR1);

//Exercice2

/* Fonction qui permet de demander et renvoyer l'entier saisie.
 * Paramètres :
 * - IN : aucun
 * - OUT : Le nombre entier saisie.*/
int saisirEntier();

/* Fonction qui permet de renvoyer le maximum des éléments d'un tableau d'entiers non vide.
 * Paramètres :
 * - INOUT : Un tableau que l'on ne modifie pas.
 * - IN : Un tableau et sa taille utilisé.
 * - OUT : L'entier maximum parmi tous les entiers pris en compte dans la taille utilisé du tableau.*/
int maxTableau(int tableau[], int taille);

#endif //TD5_THEO_HELLER_FONCTIONS_H
