#include <iostream>

using namespace std;

int main()
{
    int liczbaStart, liczbaEnd;
    cout << "Wpisz liczbe poczatkowa: \n";
    cin >> liczbaStart;
    cout << "Wpisz liczbe koncowa: \n";
    cin >> liczbaEnd;

    do
    {
        cout << liczbaStart << endl;
        liczbaStart--;
    } while (liczbaStart >= liczbaEnd);
}