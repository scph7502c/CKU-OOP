#include <iostream>

using namespace std;

int main()
{
	int f;
	float so;
	
	cout<<"Podaj frekwencje: "<<endl;
	cin>>f;
	cout<<"Podaj srednia ocen;"<<endl;
	cin>>so;
	if(f>93 || so > 4.2) {
		cout<<"Nagroda";
	} else {
		cout<<"Brak nagrody";
	}
	return 0;
}
