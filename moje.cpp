#include <iostream>

using namespace std;

int main() {
    int v[5] = {1,2,3,4,5};
    int sum = 0;
    for (int a:v){
        sum += a;
        cout<<sum<<endl;
    }
}

