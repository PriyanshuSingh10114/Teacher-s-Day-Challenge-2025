//Beginner's Track

//A. Stones on the Table

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int ans = 0;
    int l= s.length();
    for (int i=0; i<l-1; i++){
        if (s[i]==s[i+1]){
            ans++;
        }
    }
    cout << ans;
}


//
