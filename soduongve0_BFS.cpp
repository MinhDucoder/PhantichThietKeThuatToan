//http://laptrinhonline.club/problem/tichpxlietkezero
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    stack<int> S;
    set<int> out;
    cin>>n;
    S.push(n);
    out.insert(n);
    while (S.size()>0){
        int u = S.top(); S.pop();
        for (int a=1; a*a<=u; a++){
            if (u%a==0){
                int v=(a-1)*(u/a+1);
                if (out.find(v)==out.end()){
                    S.push(v);
                    out.insert(v);
                }
            }
        }
    }
    for (int x:out) cout<<x<<" ";
}
