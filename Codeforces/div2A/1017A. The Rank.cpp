#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, count = 0;
    cin>>n;
    int a, b, c ,d;
    cin>>a>>b>>c>>d;
    int sum = a + b + c + d;
    for(int i = 0; i < n - 1; i++){
        cin>>a>>b>>c>>d;
        a += b + c + d;
        if(sum >= a) count++;
    }
    cout<<n - count<<endl;
    return 0;
}