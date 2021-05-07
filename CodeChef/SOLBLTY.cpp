#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int x, a, b;
        cin>>x>>a>>b;
        int init = a * 10;
        int max_temp = (100 - x) * b * 10;
        cout<<init + max_temp<<endl;
    }
    return 0;
}