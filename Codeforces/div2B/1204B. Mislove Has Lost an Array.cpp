#include<iostream>

using namespace  std;

int main() {
    int n, l, r;
    int min_sum = 0, max_sum = 0;
    cin>>n>>l>>r;
    int i, start_min = 1, start_max = 1, last = 0;
    for(i = 1; i <= n; i++) {
        if(i <= l) {
            min_sum += start_min;
            start_min *= 2;
        }
        else {
            min_sum += 1;
        }
        if(i <= r) {
            max_sum += start_max;
            last = start_max;
            start_max *= 2;
        }
        else {
            max_sum += last;
        }
    }
    cout<<min_sum<<" "<<max_sum<<endl;
    return 0;
}

//time complexity: O(n)
//space complexity: O(1)
//approach: greedy, implementation