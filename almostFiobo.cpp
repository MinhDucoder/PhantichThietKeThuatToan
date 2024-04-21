//http://laptrinhonline.club/problem/91ea0bqd
#include<bits/stdc++.h>
using namespace std;

long long M=1e9+7;

void MyPow(long long n, long long &a, long long &b){
    if(n==0){
        a=1; b=0; return;
    }
    long long x,y;
    MyPow(n/2,x,y);
    a=(x*x%M + y*y%M)%M;
    b=(x*y%M + y*(x-y)%M)%M;
    if(n%2){
        a=(a+b)%M; b=(a-b)%M;
    }
}

int main(){
    long long n,a,b;
    cin>>n;
    MyPow(n+1,a,b);
    a--;
    cout<<(a+M)%M;
}
