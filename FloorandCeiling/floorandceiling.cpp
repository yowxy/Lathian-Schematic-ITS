#include <iostream>
#include <cmath>
using namespace std;

int main (){
    float n;
    float f, c;

    cin >> n;

    f = floor(n);
    c = ceil(n);

    cout << f << " " << c << endl;
}