#include <iostream>

using namespace std;

int x, y;
int SumaKwadrat(int a, int b)
{
    return a*a + b*b;
}

int main()
{
    cout<<"Wprowadz skladniki: \n";
    cin >> x >> y;
    cout << SumaKwadrat(x,y)<<endl;
    return 0;
}