#include<iostream>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

int main() {
    string previous, post, target;
    cin>>previous>>post>>target;
    map<char, char> mp;
    for(int i = 0; i < 26; i++){
        mp.insert(pair<char, char>(previous[i], post[i]));
    }
    for(int i = 0; i < target.size(); i++){
        if(isupper(target[i])){
            cout<<(char)toupper(mp[tolower(target[i])]);
        }
        else if(!mp[target[i]]) cout<<target[i];
        else cout<<mp[target[i]];
    }
    cout<<endl;
    return 0;
}