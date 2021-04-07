#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<string, string> mp;
    map<string, int> mp2;
    vector<string> a(n);
    string x;
    mp.insert(std::pair<string, string>("purple", "Power"));
    mp.insert(std::pair<string, string>("green", "Time"));
    mp.insert(std::pair<string, string>("blue", "Space"));
    mp.insert(std::pair<string, string>("orange", "Soul"));
    mp.insert(std::pair<string, string>("red", "Reality"));
    mp.insert(std::pair<string, string>("yellow", "Mind"));

/*  Natural solution
    for(int i = 0; i < n; i++){
        cin>>a[i];
        mp[a[i]] = "f";
    }
    cout<<6 - n<<endl;
    for(auto x: mp){
        if(x.second != "f") cout<<x.second<<endl;
    }

*/

//  STL solution

    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        mp.erase(s);
    }
    cout<<6-n<<endl;
    for(auto x: mp){
        cout<<x.second<<endl;
    }
    return 0;
}