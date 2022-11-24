#include <iostream>

using namespace std;

int main(){
    float a,b,c; //pobranie liczby zmienno przecinkowej
    cin >> a >> b >> c;

    a=(a*a)*3;
    b=(b*b)*3; // operacje przypisania
    c=(c*c)*3;
    cout << a << " " << b << " " << c << endl; // output
    return 0;
};