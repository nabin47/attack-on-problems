#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d, k;
        int pencil = 0, pen = 0;
        cin>>a>>b>>c>>d>>k;
        pen = ceil((double)a / c);
        pencil = ceil(double(b) / d);
        if(pen + pencil <= k) cout<<pen<<" "<<pencil<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}