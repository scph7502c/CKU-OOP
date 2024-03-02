#include <iostream>

using namespace std;

int main()
{
	int x, w;
	cout<<"Podaj liczbe x: ";
	cin>>x;
	if(x>=0) {
		w=x;
		cout<<"Wartosc bezwzgledna liczby x: "<<w;
	}
	else {
		w=-x;
		cout<<"Wartosc bezwzgledna liczby x: "<<w;
	}
	return 0;
}
