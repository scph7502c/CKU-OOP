#include <iostream>
using namespace std;
int main ()
{
    int i,a,iloczyn,n;
    cout << "Podaj ilosc liczb do przemnozenia: ";
    cin >> n;
    iloczyn=1;
    for (i=0; i<n; i++)
    {
        cout << "Wpisz liczbe nr " <<i+1<< ":"  ;
        cin >>a;
        iloczyn*=a;
    }
    cout << "Iloczyn podanych liczb: "<<iloczyn;
    return 0;
}

	
	
	

