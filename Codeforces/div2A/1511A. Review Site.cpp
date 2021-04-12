#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, total = 0, r;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>r;
            if(r != 2) total++;            
        }
        cout<<total<<endl;
    }
    return 0;
}