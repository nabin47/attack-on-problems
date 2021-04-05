#include<iostream>
#include<string>

using namespace std;

int main(){
    int n, m;
    string s;
    cin>>n>>m>>s;
    for(int i = 0; i < m; i++){
        int l, r;
        char pre, post;
        cin>>l>>r>>pre>>post;
        for(int j = l-1; j < r; j++){
            if(s[j] == pre) s[j] = post;
        }
    }
    cout<<s<<endl;
    return 0;
}