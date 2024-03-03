#include <iostream>

using namespace std;

int main()
{
int suma, liczba;
liczba = 1;
suma = 0;
while (liczba <= 100) {
  suma += liczba;
  ++liczba;
    
};
cout<<suma<<endl;
return 0;
};