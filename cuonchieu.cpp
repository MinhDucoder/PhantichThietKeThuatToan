/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {4,7,3,5,7,2,7,25,7,47,5,25};
    int n = sizeof(a) / sizeof(int);
    int b[n];
    partial_sum(a,a+n,b);
    for (int x:a) cout<<x<<" "; cout<<"\n";
    for (int x:b) cout<<x<<" "; 
}
4 7 3 5 7 2 7 25 7 47 5 25 
4 11 14 19 26 28 35 60 67 114 119 144 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long m,n, res=0; cin>>n>>m;
    long a[n+3] = {};
    for (int i = 1; i<=n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    while (m--) {
        long L,R;
        cin >> L >> R;
        cout<<(a[R] - a[L])<<"\n"; 
    }
}
