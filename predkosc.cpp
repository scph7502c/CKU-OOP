#include <iostream>

using namespace std;

int main()
{
	float v, s, t;
	cout<<"Podaj droge: "<<endl;
	cin>>s;
	cout<<"Podaj czas: "<<endl;
	cin>>t;
	t/=60;
	v = s/t;
	if(v>90){
	cout<<"Predkosc: "<<v<<" km/h, czyli za szybko!"<<endl;
	} else if(v==90){
	cout<<"Predkosc: "<<v<<" km/h, czyli w sam raz."<<endl;
	} else {
		cout<<"Predkosc: "<<v<<" km/h, czyli za wolno!"<<endl;
		cout<<"Za wolno";
	}
	return 0;
}
