#include <iostream>

using namespace std;

int main()
{
    int liczba, suma;
    liczba = 0;
    suma = 0;

    while (liczba < 100)
    {
        liczba++;
        if (liczba % 2 == 0)
        {
            suma += liczba;
        }
    }
    cout << "Suma liczb parzystych w zakresie od 1 do 100 wynosi: " << suma << endl;
    return 0;
}