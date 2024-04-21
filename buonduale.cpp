//http://laptrinhonline.club/problem/tichpxbuonduale
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, m, x, res=0;
    cin>>n>>k>>m;
    queue<long long> Q;
    for(int i=1; i<=n+k-1; i++){
        if(i<=n) cin>>x;
        else x=0;
        Q.push(x);
        while(Q.size()>k) Q.pop(); //v?t b? s? dýa t?n l?i quá h?n
        int t=0; //s? dýa thu dc
        while(Q.size() && Q.front()+t<=m){ //n?u s? dýa chín + s? dýa ð? thu hnay < m => thu dc
            t+=Q.front();
            Q.pop();
        }
        if(Q.size()>0){ //n?u thu ko h?t dc 
            Q.front()-=m-t; //ð? ph?n ko thu dc ? l?i Q
            t=m; //thu dc m
        }
        res+=t;
    }
    cout<<res;
}
