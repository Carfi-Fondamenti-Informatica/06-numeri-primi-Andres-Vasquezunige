#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int a = 0, b = 2;
    cin >> a;
    if(numeroprimo(a, b) == true){
        cout << "numero primo";
    }
    else{
        cout << "numero non primo";
    }
    return 0;
}
