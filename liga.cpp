#include <iostream>

using namespace std;

int main()
{
	int pkt, f;
	float so;
	
	cout<<"Podaj liczbe punnktow z ostatniego polrocza: "<<endl;
	cin>>pkt;
	cout<<"Podaj frekwencje: "<<endl;
	cin>>f;
	cout<<"Podaj srednia ocen;"<<endl;
	cin>>so;
	if(f>94 && so >= 4.0) {
		pkt = pkt + 20;
		cout<<"Klasa zdobyla "<<pkt<<" punktow";
	} else {
		cout<<"Klasa zdobyla "<<pkt<<" punktow";
	}
	return 0;
}
