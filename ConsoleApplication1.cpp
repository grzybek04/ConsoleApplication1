#include <iostream>

using namespace std;

int main() {
    // Deklaracja zmiennych
    int cyfry[7];
    int iloczyn = 1;
    double srednia = 0;

    // Pobranie siedmiu cyfr od użytkownika
    for (int i = 0; i < 7; i++) {
        do {
            cout << "Podaj " << i + 1 << ". cyfre: ";
            cin >> cyfry[i];
        } while (cyfry[i] == 0);

        // wartość bezwzględna
        if (cyfry[i] < 0) {
            cyfry[i] = abs(cyfry[i]);
        }
    }

    //  iloczynu cyfr
    for (int i = 0; i < 7; i++) {
        iloczyn *= cyfry[i];
    }

    //  średnia cyfr
    for (int i = 0; i < 7; i++) {
        srednia += cyfry[i];
    }
    srednia /= 7;

    // Wyświetlenie wyników
    cout << "Średnia cyfr wynosi: " << srednia << endl;
    cout << "Iloczyn cyfr wynosi: " << iloczyn << endl;

    return 0;
}