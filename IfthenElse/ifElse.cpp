#include <iostream>

using namespace std;

int main (){
    int n ;
    cin >> n;

    if (n > 0){
        cout << "positif" << endl;
    }else if ( n == 0 ){
        cout << "nol" << endl;
    }else if( n < 0  ) {
        cout << "negatif" << endl;
    }
    
}