#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n, p = 0;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin>>v[i];
            if((i != 0) && ((v[i] - v[0]) == i)) p++;
        }
        for(int i = 1; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if((v[j] - v[i]) == (j-i)) p++;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}