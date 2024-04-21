//http://laptrinhonline.club/problem/238953
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={500000,200000,100000,50000,20000,10000,5000,2000,1000}, M, t=0;
    cin>>M;
    if(M%1000) return !printf("-1");
    for(auto x:a){
        t+=M/x; 
        M%=x;
    }
    cout<<t;
}
