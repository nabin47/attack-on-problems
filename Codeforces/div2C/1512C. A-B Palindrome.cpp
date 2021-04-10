#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, one = 0, zero = 0, ques = 0, i , j;
        string s;
        cin>>a>>b>>s;   
        for(i = 0; i < s.size(); i++){
            if(s[i] == '0') zero++;
            else if(s[i] == '1') one++;
            else if(s[i] == '?') ques++;
        }     
        if(ques == 0){
            cout<<-1<<endl;
            continue;
        }
        int sum = (a-zero) + (b-one);
        if((ques - sum) != 0) cout<<-1<<endl;
        else{
            zero = a-zero;
            one = b-one;
            for(i = 0, j = s.size()-1; i < j; i++, j--){
                if(s[i] == '0' && s[j] == '?'){
                    s[j] = '0';
                    zero--;
                }
                else if(s[i] == '?' && s[j] == '0'){
                    s[i] = '0';
                    zero--;
                }
                else if(s[i] == '?' && s[j] == '1'){
                    s[i] = '1';
                    one--;
                }
                else if(s[i] == '1' && s[j] == '?'){
                    s[j] = '1';
                    one--;
                }
                else if(s[i] == '?' && s[j] == '?'){
                    if(zero >= 2) {
                        s[i] = '0';
                        s[j] = '0';
                        zero -= 2;
                    }
                    else{
                        s[i] = '1';
                        s[j] = '1';
                        one -= 2;
                    }
                }
            }
            if(one == 1 && s.size() % 2 != 0){
                s[i] = '1';
                cout<<s<<endl;
            }
            else if(zero == 1 && s.size() % 2 != 0){
                s[i] = '0';
                cout<<s<<endl;
            }
            else if((zero >= 1 || one >= 1) && s.size() % 2 == 0){
                cout<<-1<<endl;
            }
            else {
                cout<<s<<endl;
            }
        }
    }
    return 0;
}