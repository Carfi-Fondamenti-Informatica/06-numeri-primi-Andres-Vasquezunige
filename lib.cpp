#include "lib.h"
bool numeroprimo(int a, int b){
    if(a % b == 0){
        if(a == b){
            return true;
        }
        else{
            return false;
        }
    }
    numeroprimo(a, b + 1);
}
