#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, q;
    cin>>n>>q;
    vector<int> a(n);
    //vector<int> t;
    for(int i = 0; i < n; i++){
        int j;
        cin>>a[i];
        //a.push_back(make_pair(j, i));
    }
    vector<int> b(q);

    for(int i = 0; i < q; i++){
        int flag = 0;
        cin>>flag;
        auto it = find(a.begin(), a.end(), flag);
        int temp = a[it - a.begin()];
        int s = it - a.begin();
        a.erase(a.begin() + s);
        a.insert(a.begin(), temp);
        cout<<s+1<<" ";
    }
    cout<<endl;
    return 0;
}