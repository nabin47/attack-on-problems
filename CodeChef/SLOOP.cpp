#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int m, s;
        cin>>m>>s;
        if(m < s) {
            cout<<0<<endl;
            continue;
        }
        else {
            cout<<m / s<<endl;
        }
    }
    return 0;
}