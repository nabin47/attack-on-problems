#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        for(int i = 1; i < n-1; i++){
            if(a[i] != a[i-1] && a[i] != a[i+1]) {
                cout<<i+1<<endl;
                break;
            }
            else if(a[i] != a[i-1] && a[i] == a[i+1]) {
                cout<<i<<endl;
                break;
            }
            else if(a[i] == a[i-1] && a[i] != a[i+1]) {
                cout<<i+2<<endl;
                break;
            }
        }
    }
    
    return 0;
}