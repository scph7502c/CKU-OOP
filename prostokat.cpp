#include <iostream>

using namespace std;

float pole, obwod, x, y;

float poleProstokata(float a, float b)
{
    pole = a * b;

    return pole;
}

float obwodProstokata(float a, float b)
{
    obwod = 2 * a + 2 * b;
    return obwod;
}

int main()
{
    cout << "Podaj bok a prostokata: ";
    cin >> x;
    cout << "Podaj bok b prostokata: ";
    cin >> y;
    cout
        << "Pole prostokata wynosi: " << poleProstokata(x, y) << endl
        << "Obwod Prostokata wynosi: " << obwodProstokata(x, y);

    return 0;
}