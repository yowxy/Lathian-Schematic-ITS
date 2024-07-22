#include <iostream>

using namespace std;

int main (){
    char masukan[100];
    int ans = 0;

    while (scanf("%s", masukan) != EOF ){
        ans += atoi(masukan);
    }

    cout << ans << endl;
}