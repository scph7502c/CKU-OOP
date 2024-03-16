#include <iostream>

using namespace std;

int main()
{
    char znak;
    int liczba_znakow = 0;

    do
    {
        cout << "Wprowadz dowolny znak: ";
        cin >> znak;
        if (znak != '.')
        {
            liczba_znakow++;
        };
    } while (znak != '.');
    cout << "Liczba wprowadzonych przez Ciebie znakow to: " << liczba_znakow;
    return 0;
}