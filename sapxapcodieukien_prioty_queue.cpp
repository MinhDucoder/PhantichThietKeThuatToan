//http://laptrinhonline.club/problem/tichpxsapxep3
#include<bits/stdc++.h>
using namespace std;

struct cmp{
    bool operator()(int a, int b){
        if(a%3==b%3) return a>b;
        return a%3>b%3;
    }
};

int main(){
    priority_queue<int, vector<int>, cmp> Q;
    int n, x; cin>>n;
    for(int i=0; i<n; i++){
        cin>>x; Q.push(x);
    }
    while(Q.size()){
        cout<<Q.top()<<" ";
        Q.pop();
    }
}
