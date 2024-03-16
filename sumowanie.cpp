#include <iostream>

using namespace std;

int main()
{
    int liczba = 0;
    int suma = 0;
    do
    {
        suma += liczba;
        liczba++;
    } while (liczba <= 100);

    cout << suma;
}