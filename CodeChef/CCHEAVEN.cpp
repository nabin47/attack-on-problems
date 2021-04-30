#include<iostream>
#include<string>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int l;
        string s;
        cin>>l>>s;
        int zero = 0, one = 0, signal = 0;
        for(int i = 0; i < l; i++){
            if(s[i] == '1') one++;
            else if(s[i] == '0') zero++;
            if(one >= zero) {
                signal = 1;
                break;
            }
        }
        if(signal == 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}