#include <iostream>

using namespace std;

int main()
{
	int x, w;
	cout<<"Podaj liczb� x: ";
	cin>>x;
	if(x=0) {
		w=x;
		cout<<"Warto�� bezwzgl�dna liczby x="<<w;
	}
	else {
		w=-x;
		cout<<"Warto�� bezwzgl�dna liczby x="<<w;
	}
	return 0;
}
