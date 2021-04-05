#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, i, yes = 0, no = 0;
    string s;
    cin>>n>>s;
    for(i = 1; i < s.size(); i++){
        if(s[i-1] == 'S' && s[i] == 'F') yes++;
        else if(s[i-1] == 'F' && s[i] == 'S') no++;
    }
    if(yes > no) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}