#include<bits/stdc++.h>
using namespace std;

//O(n) time
pair<long, long> Fibo(int n){
    if(n==1) return {1,1};
    pair<long, long> t = Fibo(n-1);
    return {t.second, t.first+t.second};
}

int main(){
    int n; cin>>n;
    pair<long, long> t=Fibo(n);
    cout<<t.second;
}

//O(log n) time
// void MyPow(long long n, long long &a, long long &b){
//     if(n==0){
//         a=1; b=0; return;
//     }
//     long long x,y;
//     MyPow(n/2,x,y);
//     a=x*x+y*y;
//     b=x*y+y*(x-y);
//     if(n%2){
//         a=a+b; b=a-b;
//     }
// }
// int main(){
//     long long n,a,b;
//     cin>>n;
//     MyPow(n,a,b);
//     cout<<a;
// }
