/**
 * @author Benjamin Peronne
 * @email contact@benjaminperonne.fr
 * @create date 2022-10-11 09:05:53
 * @modify date 2022-10-11 09:05:53
 * @desc [TP1 - Calculatrice]
 */

// Il s 'agit d' ecrire un programme simulant une calculatrice rudimentaire sur des nombres entiers.

#include <iostream> // librairie de base pour les entrees/sorties (cin, cout)

using namespace std; // permet d'utiliser cout et cin sans le préfixe std;

int addition(int a, int b) {
    return a + b;
}

int soustraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

int reste(int a, int b) {
    return a % b;
}

int xexposant(int a, int b) {
    int resultat = 1;
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }
    return resultat;
}

void output(int a, int b, int resultat, char operateur) {
    cout << "\n"; // saut de ligne
    cout << ">>>>>> Le resultat : " << a << " " << operateur << " " << b << " = " << resultat << endl;
}

int main(int argc, char const *argv[]) {
    int nombre1, nombre2, resultat;
    char operateur = ' ';

    do {
        cout << "\n"; // saut de ligne
        cout << "Que voulez-vous faire ?" << endl;
        cout << "+ | Addition" << endl;
        cout << "- | Soustraction" << endl;
        cout << "* | Multiplication" << endl;
        cout << "/ | Division" << endl;
        cout << "^ | Calcul du x^n" << endl;
        cout << "q | Quitter" << endl;
        cout << "Votre choix : ";

        cin >> operateur;
        switch (operateur) {
        case '+':
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez le deuxieme nombre : ";
            cin >> nombre2;
            output(nombre1, nombre2, addition(nombre1, nombre2), '+');
            break;

        case '-':
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez le deuxieme nombre : ";
            cin >> nombre2;
            output(nombre1, nombre2, soustraction(nombre1, nombre2), '-');
            break;

        case '*':
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez le deuxieme nombre : ";
            cin >> nombre2;
            output(nombre1, nombre2, multiplication(nombre1, nombre2), '*');
            break;

        case '/':
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez le deuxieme nombre : ";
            cin >> nombre2;
            output(nombre1, nombre2, division(nombre1, nombre2), '/');
            cout << "Le reste est : " << reste(nombre1, nombre2) << endl;
            break;

        case '^':
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez le deuxieme nombre : ";
            cin >> nombre2;
            cout << "Le resultat est : " << xexposant(nombre1, nombre2) << endl;
            cout << "\n"; // saut de ligne
            break;

        case 'q':
            cout << "Au revoir !" << endl;
            break;

        default:
            cout << "Choix invalide ! \n"
                 << endl;

            break;
        }
    } while (operateur != 'q');

    return 0;
}
