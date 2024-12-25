// Tableau.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    char tableau[] = { 'a','b','c' }; // on ne donne pas la taille et calcul automatiquement avec {}
    // obligation entrer taille du tableau  on ne peut pas faire  :  char tableau[];

    char tableau2[4]; // tableau commence a 0
    tableau2[0] = 1; // tableau commence a 0
    tableau2[1] = 3;
    tableau2[2] = 8;
    tableau2[3] = 5;
// trop lourd et fastidieux

// tableau pour l'alphabet
    char alphabet[26];
    char valeur = 97;

    for (int i = 0; i < 26; ++i)
    {
        alphabet[i] = valeur++;
        std::cout << i << alphabet[i] << std::endl;
    }


}

// tableau est toujours contigue