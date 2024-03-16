#include <iostream>

using namespace std;
int i, m;

void Gwiazdki(int n)
{
    for (i = 0; i < n; i++)
        cout << "*";
}

int main()
{
    cout << "Podaj liczbe gwiazdek: ";
    cin >> m;
    cout << "\nPoznaj funkcje\n";
    Gwiazdki(m);
    cout << "\nw jezyku C++\n";
    Gwiazdki(m);
    cout << "\nna kursie z programowania\n";
    Gwiazdki(m);
    return 0;
}