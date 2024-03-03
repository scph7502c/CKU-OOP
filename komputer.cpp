#include <iostream>

using namespace std;

int main()
{
    float kwota, wplata, suma_wplat;

    cout << "Podaj potrzebna kwote: ";
    cin >> kwota;
    suma_wplat = 0;
    while (suma_wplat < kwota)
    {
        cout << "\nWprowadz wplate: ";
        cin >> wplata;
        suma_wplat = suma_wplat + wplata;
        cout << "\nBiezaca suma: " << suma_wplat;
    }
    cout << "\nSuma wplat wynosi: " << suma_wplat << " zl";
    cout << "\nNadplata wynosi: " << suma_wplat - kwota << " zl";

    return 0;
}