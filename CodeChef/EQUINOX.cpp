#include<iostream>
#include<string>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        long long a, b, sar = 0, anu = 0;
        cin>>n>>a>>b;
        for(int i = 0; i < n; i++){
            string s;
            cin>>s;
            if(s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X') sar += a;
            else anu += b;
        }
        if(sar == anu) cout<<"DRAW"<<endl;
        else if(sar > anu) cout<<"SARTHAK"<<endl;
        else cout<<"ANURADHA"<<endl;
    }
    return 0;
}