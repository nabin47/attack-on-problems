#include<iostream>
#include<vector>

using namespace  std;

int main(){
    int n, q, i, x;
    cin>>n>>q;
    vector<int> color(51, 0);
    for(i = 1; i <= n; i++){
        cin>>x;
        if(!color[x]) color[x] = i;
    }
    for(i = 1; i <= q; i++){
        cin>>x;
        cout<<color[x]<<" ";

        for(int j = 1; j < 51; j++){
            if(color[j] != 0 && color[j] < color[x]) color[j]++;
        }
        color[x] = 1;
    }
    cout<<endl;
    return 0;
}