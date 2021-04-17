#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, i, x;
        cin>>n;
        vector<int> even;
        vector<int> odd;
        for(i = 0; i < n; i++){
            cin>>x;
            if(x % 2 == 0) even.push_back(x);
            else odd.push_back(x);
        }
        int even_s = even.size(), odd_s = odd.size();
        for(i = 0; i < odd_s; i++) cout<<odd[i]<<" ";
        for(i = 0; i < even_s; i++) cout<<even[i]<<" ";
        /*
        if(even_s > odd_s){
            if(even_s % 2 != 0){
                for(i = 0; i < even_s - 1; i++) cout<<even[i]<<" ";
                for(i = 0; i < odd_s; i++) cout<<odd[i]<<" ";
                cout<<even[even_s-1];
             }
            else{
                for(i = 0; i < even_s; i++) cout<<even[i]<<" ";
                for(i = 0; i < odd_s; i++) cout<<odd[i]<<" ";
            }
        }
        else{
            if(odd_s % 2 != 0){
                for(i = 0; i < odd_s - 1; i++) cout<<odd[i]<<" ";
                for(i = 0; i < even_s; i++) cout<<even[i]<<" ";
                cout<<odd[odd_s-1];
            }
            else{
                for(i = 0; i < odd_s; i++) cout<<odd[i]<<" ";
                for(i = 0; i < even_s; i++) cout<<even[i]<<" ";
            }
        }
        */

        cout<<endl;
    }
    return 0;
}