#include <iostream>

using namespace std;

int main()
{
    int suma, liczba;
    suma = 0;

    while (liczba > 0)
    {
        cout << "\nWprowadz liczbe: ";
        cin >> liczba;
        suma += liczba;
        cout << "\nSuma wynosi obecnie: " << suma;
    }

    return 0;
}