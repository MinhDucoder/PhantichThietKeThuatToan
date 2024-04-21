#include<bits/stdc++.h>
using namespace std;

int x[100], n;
void Try(int k) //gia su x[1]...x[k-1]
{
    if(k-1==n){
        for(int i=1; i<=n; i++){
            cout<<x[i];
        }
        cout<<"\n";
    }
    else{
        x[k]=0; Try(k+1);
        x[k]=1; Try(k+1);
    }
}
int main(){
    cin>>n;
    Try(1);
}

