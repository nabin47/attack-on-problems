#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if(n == 2) {
            cout<<-1<<endl;
            continue;
        }
        int first = 1, second = ceil((double)n * n / 2) + 1;
        for(int i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++)
            {
                if(i % 2 == 0 && j % 2 == 0) cout<<first++<<" ";
                else if(i % 2 == 0 && j % 2 != 0) cout<<second++<<" ";
                else if(i % 2 != 0 && j % 2 == 0) cout<<second++<<" ";
                else if(i % 2 != 0 && j % 2 != 0) cout<<first++<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

//time complexity: O(n^2)
//space complexity: O(1)
//approach: constructive algorithms