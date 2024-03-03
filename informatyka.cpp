#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Polish");
	
	int i, n;
	string napis = "Lubiê programowaæ";
	
	cout<<"Ile razy chcesz wyœwietiæ napis?";
	cin>>n;
	
	for(i=0; i<n; i++) {
		cout<<napis<<endl;
	};
	
	return 0;
	
}
