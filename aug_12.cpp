//Beginner's Track - 43 Days Journey

//A. Domino piling

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int No_of_dominos=m*n/2;
    cout<<No_of_dominos<<endl;
return 0;
}

//Advanced Track - 43 Days Journey

//A. Soft Drinking

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int drink = k*l;
    int lime = c*d;
    int salt = p;

    int toast = drink/nl;
    int toast_salt = salt/np;
    int toast_lime = lime;

    int ans = min(toast,min(toast_salt,toast_lime))/n;
    cout << ans;
}
