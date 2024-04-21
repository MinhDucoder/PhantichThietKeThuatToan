//http://laptrinhonline.club/problem/tichpxthangmay

#include <bits/stdc++.h>
using namespace std;

void path(int s, int f, int *p){
    if (s==f) cout<<s;
    else{
        path(s, p[f], p);
        cout<<"->"<<f;
    }
}

int main(){
    int n, k, m, s, f;
    queue<int> Q;
    cin>>n>>k>>m>>s>>f;
    int d[n+5] = {}, p[n+5];
    //map<int, int> d;
    Q.push(s);
    d[s]=1;
    while(Q.size()>0 && d[f]==0){
        int u = Q.front();
        Q.pop();
        for  (int v:{u+k,u-m}){
            if (v>=1 && v<=n && d[v]==0){
                d[v] = d[u] + 1;
                p[v]=u;
                Q.push(v);
            }
        }
    }
    if (d[f]) {
        cout<<"So buoc: "<<d[f]-1<<"\n"; path(s,f,p);
    }
}
