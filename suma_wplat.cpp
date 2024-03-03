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
        cout << "wprowadz wplate: ";
        cin >> wplata;
        suma_wplat = suma_wplat + wplata;
    }
    cout << "Suma wplat wynosi: " << suma_wplat << " zl";

    return 0;
}