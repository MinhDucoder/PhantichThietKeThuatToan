//http://laptrinhonline.club/problem/tichpxtgpascal
#include<bits/stdc++.h>
using namespace std;

map<pair<int,int>, long long> Dic;
long long C(int k, int n){
    if(k==0 or k==n) return Dic[{k,n}]=1;
    if(Dic.find({k,n})!=Dic.end()) return Dic[{k,n}];
    return Dic[{k,n}]=C(k-1,n-1)+C(k,n-1);
}

int main(){
    int n;
    cin>>n;
    for (int i=0; i<=n; i++){
        cout<<"\n";
        for(int j=0; j<=i; j++) cout<<C(j,i)<<" ";
    }
}
