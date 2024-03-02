#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x;
	float p;
	cout<<"Podaj liczbe :"<<endl;
	cin>>x;
	if(x>=0){
	p=sqrt(x);
	cout<<"Pierwiastek kwadratowy z liczby "<<x<<" wynosi "<<p<<endl;
	} else {
		cout<<"x mniejsze od 0"<<endl;
		main();
	}
	return 0;
}
