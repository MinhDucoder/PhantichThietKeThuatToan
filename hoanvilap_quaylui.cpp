//http://laptrinhonline.club/problem/tichpxhoanvilap
#include<bits/stdc++.h>
using namespace std;

string s;
int n;
map<char,int> F;
void TRY(string x){
    if(x.size()==n) cout<<x<<"\n";
    else for(auto &f:F){
        if(f.second>0){
            f.second--;
            TRY(x+f.first);
            f.second++;
        }
    }
}

int main(){
    cin>>s;
    n=s.size();
    for(auto c:s) F[c]++; //dem tan suat
    TRY("");
}

/*
int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    
}
*/
