//http://laptrinhonline.club/problem/tichpxnghichthe
#include<bits/stdc++.h>
using namespace std;

int a[100005], b[100005], c[100005], n;
long long demNghichThe(int L, int R){
    if(L==R-1) return 0;
    int M=(L+R)/2, i=0, j=0, k;
    long long s=demNghichThe(L,M)+demNghichThe(M,R);
    for(k=M-1; k>=L; k--) b[++i]=a[k];        //d?o ngc n?a d?u a
    for(k=R-1; k>=M; k--) c[++j]=a[k];      //d?o ngc n?a sau a
    for(k=L; k<R; k++){
        if(i>0&&j>0){
            if(c[j]<b[i]){
                s+=i; a[k]=c[j--];
            }
            else a[k]=b[i--];
        }
        else a[k]=i>0?b[i--]:c[j--];
    }
    return s;
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<demNghichThe(0,n);
}
