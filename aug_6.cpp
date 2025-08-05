//Beginner's Track

//A. Helpful Maths

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>ans;
    for(int i=0;i<s.size();i=i+2){
        ans.push_back(s[i]-'0');
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        if(i!=0){
            cout<<"+";
        }
        cout<<ans[i];
    }
    cout<<endl;
 
return 0;
}

//A. Drinks
  
#include<bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cin>>n;
    float avg;
    float sum=0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        ans.push_back(p);
    }
    
    for(int i=0;i<ans.size();i++){
        sum=sum+ans[i]; 
    }
    avg=sum/n;
    cout<<avg<<endl;
 
return 0;
}


//Football
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int maxZero = 0, maxOne = 0;
    int currentZero = 0, currentOne = 0;
    
    for (char ch : s) {
        if (ch == '1') {
            currentOne++;
            currentZero = 0;
            if (currentOne > maxOne) {
                maxOne = currentOne;
            }
        } else if (ch == '0') {
            currentZero++;
            currentOne = 0;
            if (currentZero > maxZero) {
                maxZero = currentZero;
            }
        }
    }
    
    if (maxZero >= 7 || maxOne >= 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}

