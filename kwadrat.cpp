#include <iostream>

using namespace std;

float pole, obwod, x;

float poleKwadratu(float a)
{
    pole = a * a;

    return pole;
}

float obwodKwadratu(float a)
{
    obwod = 4 * a;
    return obwod;
}

int main()
{
    cout << "Podaj bok kwadratu: ";
    cin >> x;
    cout
        << "Pole kwadratu o boku " << x << " wynosi: " << poleKwadratu(x) << endl
        << "Obwod kwadratu o boku " << x << " wynosi: " << obwodKwadratu(x);

    return 0;
}