// Source = Strvier videos
// Problem = Check if a string is palindron or not
// Time complexity = O(n/2)

#include<bits/stdc++.h>
using namespace std;
bool f(string &s, int i) {
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return f(s, i+1);
}
int main(){
    string s = "madam";
    cout << f(s, 0) << endl;
    return 0;
}