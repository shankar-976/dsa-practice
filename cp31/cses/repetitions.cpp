#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s; cin>>s;

    int cnt = 1, maxi = 1; char c = s[0];

    for(int i=1;i<s.length();i++){
        if(c == s[i]){
            cnt++;
            maxi = max(cnt , maxi);
        }else{
            c = s[i];
            cnt = 1;
            maxi = max(cnt , maxi);
        }
    }

    cout<<maxi;
}