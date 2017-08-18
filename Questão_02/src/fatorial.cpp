#include "fatorial.h"

int fatorial(int n){
    if (n < 1) return -1; //passo base
    if (n == 0 || n ==1 ) return n;
    if (n == 2) return n;
    else return n * fatorial(n-1);
}