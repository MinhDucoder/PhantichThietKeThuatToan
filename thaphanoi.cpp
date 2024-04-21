#include <bits/stdc++.h>
using namespace std;

void THN(int n, char A, char B, char C){
    if (n>1) THN(n-1, A, C, B);
    cout << "\nChuy?n ð?a " << n << " t? " << A << " sang " << B;
    if (n>1) THN(n-1, C, B, A);
}

int main(){
    THN(3, 'A', 'B', 'C');
}

/*
Ð?t T(n) là ð? ph?c t?p
Ta có:  T(n) = C0 n?u n = 1
        T(n) = 2T(n-1) + C n?u n>1
Nên T(n) = 2T(n-1) + C
         = 2[2T(n-2) + C] + C
         = 2^2T(n-2) + 2C + C
         = 2^3T(n-3) + 2^2C + 2^1C + 2^0C
         ...
         = 2^nT(n-n) + [2^(n-1) + 2^(n-2) +...+ 2^1 + 2^0]C
         = 2^nC0 + (2^n - 1)C
         = theta(2^n)
*/
