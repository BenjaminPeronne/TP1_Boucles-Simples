/**
 * @author Benjamin Peronne
 * @email contact@benjaminperonne.fr
 * @create date 2022-10-11 09:06:11
 * @modify date 2022-10-11 09:06:11
 * @desc [TP1]
 */

// TP1 - Boucles Simples - Selection Multiple
/*
Le but de ce TP est de renforcer les notions de boucles et d'accumulation d'une part et de se familiariser avec la notion de sélection multiple d'autre part.

Il permet encore de prendre connaissance des fonctions mathématiques standards.

Il permet enfin d'illustrer la divison euclidienne (ou divison de nombres entiers) basée sur le quotient et le reste.
*/

// Calcul de la moyenne de nombre lus au clavier
/*
Il s’agit de faire un programme qui permet de lire 10 nombres entiers au clavier, qui calcule au fur et a mesure leur somme et affiche en toute fin leur moyenne sous forme reelle. Les nombres seront tous lus en utilisant une seule variable. Attention ! Pour que le resultat du calcul de la moyenne soit réel, il faut que le numerateur ou le denominateur de la division soit lui-meme un nombre reel.
*/

#include <iostream> // librairie de base pour les entrees/sorties (cin, cout)

using namespace std; // permet d'utiliser cout et cin sans le préfixe std::

int main() {
    int i, somme, nombre;
    float moyenne;

    somme = 0;

    cout << "Entrez 10 nombres entiers" << endl;
    for (i = 1; i <= 10; i++) { // boucle de 1 a 10
        cout << "Entrez le nombre " << i << " : ";
        cin >> nombre; // lecture d'un nombre entier
        somme = somme + nombre;
    }

    moyenne = somme / 10.0;                                        // calcul de la moyenne
    cout << "La moyenne des 10 nombres est : " << moyenne << endl; // affichage de la moyenne

    
    return 0;
}