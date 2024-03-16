#include <iostream>

using namespace std;
int i, m;

void kolumna(int n)
{
    for (i = 1; i <= n; i++)
        cout << "= " << i << endl;
}

int main()
{
    cout << "Wprowadz ilosc liczb do wyswietlenia w kolumnie: ";
    cin >> m;
    kolumna(m);
    return 0;
}