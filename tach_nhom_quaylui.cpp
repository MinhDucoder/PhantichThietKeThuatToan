#include<bits/stdc++.h>
using namespace std;

int tach(int n){
    if (n<5 or n%2) return 1;
    return tach(n/2-2)+tach(n/2+2);//t�nh s? n�t l�
    //return tach(n/2-2)+tach(n/2+2)+1; //t�nh t?t c? n�t
}

void ve(int n, string p="\n"){
    if(n>4 and n%2==0) ve(n/2-2, p+"\t");
    cout<<p<<n;
    if(n>4 and n%2==0) ve(n/2+2, p+"\t");
}

int main(){
    cout<<tach(60);
    ve(60);
}
