//http://laptrinhonline.club/problem/tichpx68
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    cin>>n;
    queue<int> Q;
    map<int,string> M;
    // if(n%S==0){
    //     cout<<0; 
    //     return 0;
    // }
    Q.push(8%n); M[8%n]="8";
    Q.push(6%n); M[6%n]="6";
    while (Q.size() and M.find(0)==M.end()){
        int u=Q.front(); Q.pop();
        x=(u*10+6)%n; 
        if(M.find(x)==M.end()){
            M[x]=M[u]+"6";
            Q.push(x);
        }
        x=(u*10+8)%n; 
        if(M.find(x)==M.end()){
            M[x]=M[u]+"8";
            Q.push(x);
        }
    }
    if(M.find(0)==M.end()) M[0]="0";
    cout<<M[0];
}
