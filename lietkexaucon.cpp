//http://laptrinhonline.club/problem/tichpxlietkexauco
#include<bits/stdc++.h>
using namespace std;

set<string> res;

void lietke(string x){
    if (x=="") return;
    if(res.find(x)==res.end()){
        res.insert(x);
        lietke(x.substr(0, x.size()-1));
        lietke(x.substr(1, x.size()-1));
    }
}

int main(){
    string s; cin>>s; lietke(s);
    for(auto r:res) cout<<r<<"\n";
}
