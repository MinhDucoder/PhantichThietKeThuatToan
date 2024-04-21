//http://laptrinhonline.club/problem/tichpxtrinhtham
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<pair<int,int>, vector<pair<int,int>>> Q;
    int n,x,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>x;
        while(Q.size() && Q.top().first<=x) Q.pop(); //b? ði nx ph?n t? bé mà xa
        Q.push({x,i});
        if(i>=k){
            while (i-Q.top().second>=k)
            {
                Q.pop(); //loai cac max ngoài kho?ng
            }
            cout<<Q.top().first<<" ";
        } 
    }
}
