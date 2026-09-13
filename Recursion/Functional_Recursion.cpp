// source = striver videos
// Problem = Prime sum of n numbers using functional recursion
// Time complexity = 0(n)
// Space complexity = 0(n)

#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0) return 0;
    return n + sum(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << sum(n) << endl;
}
