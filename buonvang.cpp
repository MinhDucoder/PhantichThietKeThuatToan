//http://laptrinhonline.club/problem/tichpxbuonvang

/*#include <bits/stdc++.h>
using namespace std;

int main(){
    long n, res=0;
    cin>>n;
    long a[n];                  //chu y khai bao dung n phan tu de chay vong lap
    for (auto &x:a) cin>>x;     //nhap a[0]...a[n]
    for (int i=0; i<n-1; i++){
        long z=*max_element(a+i,a+n);   //max(a[i]...a[n-1])
        if (z>a[i]) res+=z-a[i];
    }
    cout << res;
}

*/ //TLE

#include <bits/stdc++.h>
using namespace std;

int main(){
    int z=-INT_MAX;
    long n, res=0;
    cin>>n;
    long a[n];                  //chu y khai bao dung n phan tu de chay vong lap
    for (auto &x:a) cin>>x;     //nhap a[0]...a[n]
    for (int i=n-1; i>=0; i--){ //chay tu cuoi ve
        a[i]<z?res+=z-a[i]:z=a[i];
    }   
    cout << res;
}
