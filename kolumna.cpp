#include <iostream>

using namespace std;
int i;

void kolumna()
{
    for (i = 1; i <= 12; i++)
        cout << "= " << i << endl;
}

int main()
{
    kolumna();
    return 0;
}