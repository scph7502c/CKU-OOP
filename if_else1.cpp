#include <iostream>

using namespace std;

int main()
{
	int x, w;
	cout<<"Podaj liczbê x: ";
	cin>>x;
	if(x=0) {
		w=x;
		cout<<"Wartoœæ bezwzglêdna liczby x="<<w;
	}
	else {
		w=-x;
		cout<<"Wartoœæ bezwzglêdna liczby x="<<w;
	}
	return 0;
}
