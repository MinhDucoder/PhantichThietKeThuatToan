//http://laptrinhonline.club/problem/tichpxdongnuoc
#include <bits/stdc++.h>
using namespace std;

map<pair<int,int>,pair<int,int>> P;
void path(pair<int,int> v){
    if(v.first==0 && v.second==0){
        cout<<"(0,0)";
        return;
    }
    path(P[v]);
    cout<<"->("<<v.first<<","<<v.second<<")";
}

int main(){
    int n,m,k,z;
    cin>>n>>m>>k;
    queue<pair<int,int>> Q;
    map<pair<int,int>, int> M;
    Q.push({0,0});
    M[{0,0}] = 0;
    while(Q.size()){
        int x = Q.front().first, y = Q.front().second; Q.pop();
        z=x+y;
        pair<int, int> Next[] = {{0,y}, {n,y}, {x,0}, {x,m}, {max(0,z-m), min(m,z)}, {min(n,z), max(0,z-n)}};
        for (auto t:Next){
            if(M.find(t)==M.end()){
                M[t]=M[{x,y}]+1;
                Q.push(t);
                P[t]={x,y};
                if(t.first==k or t.second==k){
                    cout<<M[t]<<"\n";
                    path(t);
                    return 0;
                }
            }
        }
    }
    cout<<"Khong dong duoc";
}
