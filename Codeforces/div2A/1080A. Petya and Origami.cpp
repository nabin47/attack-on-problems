#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int total = 0;
    int red = 2 * n, green = 5 * n, blue = 8 * n;
    total = ceil(double(red) / k) + ceil(double(green) / k) + ceil(double(blue) / k);
    cout<<total<<endl;
    return 0;
}