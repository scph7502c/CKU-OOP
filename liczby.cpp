#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Polish");
	int i, startValue, endValue;
	cout<<"\nWprowadŸ wartoœæ pocz¹tkow¹: ";
	cin>>startValue;
	cout<<"\nWprowadŸ wartoœæ koñcow¹: ";
	cin>>endValue;
	if(startValue > endValue) {	
	for(startValue; startValue >= endValue; startValue--) {
		
		cout<<startValue<<endl;
	};
	
} else {
	cout<<"\nWartoœæ pocz¹tkowa musi byæ wiêksza od koñcowej";
	main();
}
	
	return 0;
}
