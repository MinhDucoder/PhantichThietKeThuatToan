//http://laptrinhonline.club/problem/tichpxmedian
#include <bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL); //fast io cin cout
    priority_queue<int, vector<int>, greater<int>> R;
    priority_queue<int, vector<int>> L;
    int n,x,a,b; scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d",&x);
        i%2?L.push(x):R.push(x);
        if(i>=2 && L.top()>R.top()){
            a=L.top(); L.pop();
            b=R.top(); R.pop();
            L.push(b); R.push(a);
        }
        printf("%d",L.top());
    }
}
