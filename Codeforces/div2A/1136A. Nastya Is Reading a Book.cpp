#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int, int> > chapter;
    for(int i = 0; i < n; i++){
        int l, r;
        cin>>l>>r;
        chapter.push_back(make_pair(l, r));
    }
    int k;
    cin>>k;
    for(int i = 0; i < n; i++){
        if(chapter[i].first <= k && chapter[i].second >= k){
            cout<<n - i<<endl;
            break;
        }
    }
    return 0;
}