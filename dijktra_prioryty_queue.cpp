//http://laptrinhonline.club/problem/tichpxzeromin
#include <bits/stdc++.h>
using namespace std;

void sol(){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
    map<int, int> M;
    int s,f; cin>>s>>f;
    Q.push({0,s}); M[s]=0;
    while(Q.size()){
        int c=Q.top().first, u=Q.top().second; Q.pop();
        if(M[u]<c) continue;
        if(u==f){
            cout<<c<<"\n"; return;
        }
        for(int a=1; a*a<=u; a++){
            if(u%a==0){
                int b=u/a, v=(a-1)*(b+1), d=c+(b%a?b+a:b/a);
                if(v>=f and (M[v]==0 or M[v]>d)){
                    Q.push({d,v}); 
                    M[v]=d;
                }
            }
        }
    }
    cout<<"-1\n";
}

int main(){
    int t; cin>>t;
    while(t--) sol();
}
