//http://laptrinhonline.club/problem/tichpxtochucsukien
#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n, m=-1e9, k=-1e9, res=0; 
    cin>>n;
    pair<int,int> A[n];
    for(auto &a:A){
        cin>>a.second>>a.first; //sort = tg kthuc, pair sort first trc => first = tg kt, second=bd
    }
    sort(A,A+n);
    for(auto a:A){
        if(m<k) swap(m,k); 
        if(a.second>m){
            res++;
            m=a.first;
        }
        else if(a.second>k){
            res++;
            k=a.first;
        }
    }
    cout<<res<<"\n";
}

int main(){
    int t; cin>>t; while(t--) sol();
}
