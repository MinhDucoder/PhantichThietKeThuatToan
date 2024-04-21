//http://laptrinhonline.club/problem/tichpxleothang
#include <bits/stdc++.h>
using namespace std;

//QuayLui (only n<20)
// int d=0;
// void TRY(int T, int n){
//     if(T==n){
//         d++;
//         return;
//     }
//     for(int i=1; i<=3; i++){
//         if(T+i<=n) TRY(T+i, n);
//     }
// }
// int main(){
//     int n; cin>>n;
//     TRY(0,n);
//     cout<<d;
// }

//QHoachDong
int main(){
    int n; cin>>n;
    long C[n+5] = {0,1,2,4};
    for(int i=4; i<=n; i++){
        C[i]=C[i-1]+C[i-2]+C[i-3];
    }
    cout<<C[n];
}
