#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Polish");
	int i, startValue, endValue;
	cout<<"\nWprowad� warto�� pocz�tkow�: ";
	cin>>startValue;
	cout<<"\nWprowad� warto�� ko�cow�: ";
	cin>>endValue;
	if(startValue > endValue) {	
	for(startValue; startValue >= endValue; startValue--) {
		
		cout<<startValue<<endl;
	};
	
} else {
	cout<<"\nWarto�� pocz�tkowa musi by� wi�ksza od ko�cowej";
	main();
}
	
	return 0;
}
