#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, signal = 0;
        string s;
        cin>>n>>s;
        vector<int> v(26, 0);
        for(int i = 0; i < n; i++) {
            if(!v[(int)s[i] - 65]) {
                v[(int)s[i] - 65] = 1;
            }
            else if(v[(int)s[i] - 65] == 1 && s[i] == s[i-1]) continue;
            else {
                signal = 1;
                break;
            }
        }
        if(signal == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

//time complexity: O(n)
//space complexity: O(k) [k = number of distinct alphabets]
//approach: brute force, implementation