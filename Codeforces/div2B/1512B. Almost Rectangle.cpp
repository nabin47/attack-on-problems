#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n, i, j;
        int ai = 0, aj = 0, bi = 0, bj = 0, flag = 0;
        vector<vector<char>>rect;
        cin>>n;
        for(i = 0; i < n; i++){
            vector<char> x(n);
            for(j = 0; j < n; j++){
                cin>>x[j];
                if(x[j] == '*' && flag == 0){
                    ai = i;
                    aj = j;
                    flag = 1;
                }
                if(x[j] == '*' && flag != 0){
                    bi = i;
                    bj = j;
                }
            }
            rect.push_back(x);
        }
        if(ai != bi && aj != bj){
            rect[ai][bj] = '*';
            rect[bi][aj] = '*';
        }
        else if(ai == bi && ai == 0){
            rect[n-1][aj] = '*';
            rect[n-1][bj] = '*';
        }
        else if(ai == bi && ai == n-1){
            rect[0][aj] = '*';
            rect[0][bj] = '*';
        }
        else if(ai == bi){
            rect[0][aj] = '*';
            rect[0][bj] = '*';
        }
        else if(aj == bj && aj == 0){
            rect[ai][n-1] = '*';
            rect[bi][n-1] = '*';
        }
        else if(aj == bj && aj == n-1){
            rect[ai][0] = '*';
            rect[bi][0] = '*';
        }
        else if(aj == bj){
            rect[ai][0] = '*';
            rect[bi][0] = '*';
        }
        for(i = 0; i <n; i++){
            for(j = 0; j <n; j++){
                cout<<rect[i][j];
            }
            cout<<endl;
        }
        //cout<<endl;
    }
    return 0;
}