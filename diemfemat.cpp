//Cho A,B,C tim M de MA + MB + MC min

#include <bits/stdc++.h>
using namespace std;
typedef pair<double,double> diem;
#define x first
#define y second
double kc(diem A, diem B){
    A.x -= B.x; A.y -= B.y;
    return sqrt(A.x*A.x + A.y*A.y);
}

int main(){
    diem A,B,C,M;
    cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
    M={(A.x + B.x + C.x)/3,(A.y + B.y + C.y)/3};
    double d=10, k=kc(A,M) + kc(B,M) + kc(C,M);
    while (d>1e-4){
        diem Next[]={{M.x-d,M.y}, {M.x+d,M.y}, {M.x,M.y-d}, {M.x,M.y+d}};
        for (auto N:Next){
            double z=kc(A,N) + kc(B,N) + kc(C,N);
            if (z<k) {k=z; M=N; d*=2; break;}
        }
        d/=2;
    }
    cout<<setprecision(3)<<fixed<<M.x<<" "<<M.y;
}
