#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, one = 0, zero = 0, ques = 0, i , j, flag = 0;
        string s;
        cin>>a>>b>>s; 
        for (size_t times = 0; times < 2; times++)
        { 
            for(i = 0; i < s.size(); i++){
                j = s.size() - i -1;
                if(s[i] != '?'){
                    if(s[j] == '?') s[j] = s[i];
                    else if(s[i] != s[j]){
                        cout<<-1<<endl;
                        flag = 1;
                        break;
                    }
                }
                if(flag == 1) break;
            }
            if(flag == 1) break;
            reverse(s.begin(), s.end());
        }
        if (flag == 1) continue;
        a -= count(s.begin(), s.end(), '0');
        b -= count(s.begin(), s.end(), '1');
        ques = count(s.begin(), s.end(), '?');
        bool isMidEmpty = (s.size() % 2 == 1 && s[s.size() / 2] == '?');
        if(a < 0 || b < 0 || a + b != ques || isMidEmpty && a % 2 != 0 && b % 2 != 0){
            cout<<-1<<endl;
            continue;
        }
        if(a % 2 == 1 || b % 2 == 1){
            if(s[s.size() / 2] != '?'){
                cout<<-1<<endl;
                flag = 1;   
            }
            else if(a % 2 == 1) {
                s[s.size() / 2] = '0';
                a--;
            }
            else{
                s[s.size() / 2] = '1';
                b--;
            }
        }
        if(flag == 1) continue;
        if(a % 2 == 1 || b % 2 == 1){
            cout<<-1<<endl;
            continue;
        }
        for(i = 0; i < s.size(); i++){
            if(s[i] == '?'){
                if(a > 0){
                    s[i] = s[s.size() - i - 1] = '0';
                    a-=2;
                }
                else
                {
                    s[i] = s[s.size() - i - 1] = '1';
                    b-=2;
                }
                
            }
        }
        cout<<s<<endl;
    }
    return 0;
}


//Tutorial link: https://codeforces.com/blog/entry/89535