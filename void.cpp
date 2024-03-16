#include <iostream>

using namespace std;
int i;

void Gwiazdki()
{
    for(i=0; i<20; i++)
    cout<<"*";
}

int main()
{
    cout<<"Linia gwiazdek \n";
   Gwiazdki();
    return 0;
}