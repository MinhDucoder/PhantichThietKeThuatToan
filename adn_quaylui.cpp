//http://laptrinhonline.club/problem/adn
#include<bits/stdc++.h>
using namespace std;
vector<string> a, b;
pair<int,vector<string>> res;
int n;

pair<int, vector<string>> TRY(string x, int k){
    if(k==n) return{1,{x}};
    int count = 0;
    vector<string> substrings;
    if(a[k] != b[k]){
        auto temp = TRY(x+b[k], k+1);
        count += temp.first;
        substrings.insert(substrings.end(), temp.second.begin(), temp.second.end());
    }
    auto temp = TRY(x+a[k], k+1);
    count += temp.first;
    substrings.insert(substrings.end(), temp.second.begin(), temp.second.end());
    return {count, substrings};
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    for(int i=0; i<n; i++) if(a[i]>b[i]) swap(a[i],b[i]);
    res = TRY("", 0);
    cout<<res.first<<"\n";
    for (auto i = res.second.begin(); i != res.second.end(); ++i){
        cout << *i << " "; 
    }
}
