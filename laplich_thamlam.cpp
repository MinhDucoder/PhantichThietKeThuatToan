//http://laptrinhonline.club/problem/tichpxlaplich
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m=-1e9, res=0; cin>>n;
    pair<int,int> A[n];
    for(auto &a:A) cin>>a.second>>a.first; //sort = tg kthuc, pair sort first trc => first = tg kt, second=bd
    sort(A,A+n);
    for(int i=0; i<n; i++){
        if(A[i].second>m){
            res++;
            m=A[i].first;
        }
    }
    cout<<res;
}
