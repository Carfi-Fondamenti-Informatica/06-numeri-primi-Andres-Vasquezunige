#include "lib.h"
bool numeroprimo(int n, int i){
    if(n % i == 0){
        if(n == i){
            return true;
        }
        else{
            return false;
        }
    }
    numeroprimo(n, i + 1);
}
