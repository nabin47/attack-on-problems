#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
 
using namespace std;

int main() {
    int n, a, b, i, c = 0;
    long long sum = 0, back_sum = 0;
    cin>>n>>a>>b;
    vector<int> x(n);
    int s = 0;
    for(i = 0; i < n; i++) {
        cin>>x[i];
        if(i == 0) {
            s = ceil((x[i] * a) / (double)b);
        }
        sum += x[i];
    }
    sort(x.begin(), x.end());
    for(i = n - 1; i >= 0; i--) {
        if(sum - back_sum < s) {
            back_sum += x[i];
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}