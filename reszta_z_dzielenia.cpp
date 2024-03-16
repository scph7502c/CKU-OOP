#include <iostream>

using namespace std;

int wynik, x, y;

int podzielnaPrzezTrzy(int a, int b)
{
    wynik = a % b;
    return wynik;
}

int main()
{
    cout << "Podaj dzielna: \n";
    cin >> x;
    cout<<"Podaj dzielnik: \n";
    cin>>y;
    cout
         << podzielnaPrzezTrzy(x, y) << endl;
        
    return 0;
}