#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int s_size = s.size();
        vector<int> t, m;
        for (size_t i = 0; i < s_size; i++)
        {
            if(s[i] == 'T') t.push_back(i);
            else m.push_back(i);
        }
        if(t.size() != 2* m.size()){
            cout<<"NO"<<endl;
            continue;
        }
        int flag = 0;
        for (size_t i = 0; i < m.size(); i++)
        {
            if(t[i] > m[i] || m[i] > t[i + m.size()]){
                flag = 1;
                break;
            }
        }
        if(flag == 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}