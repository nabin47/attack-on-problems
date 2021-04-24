#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n, signal = 0;
    string s;
    cin>>n>>s;
    int start = 0, en = n - 1;
    vector<char> v(n);
    for(int i = n-1; i >= 0; i--){
        if(signal == 0) {
            v[en--] = s[i];
            signal = 1;
        }
        else {
            v[start++] = s[i];
            signal = 0;
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}