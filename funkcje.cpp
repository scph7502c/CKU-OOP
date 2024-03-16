#include <iostream>

using namespace std;

int x, y;
int SumaKwadrat()
{
    return x * x + y * y;
}

int main()
{
    cin >> x >> y;
    cout << SumaKwadrat();
    return 0;
}