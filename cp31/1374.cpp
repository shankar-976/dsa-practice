#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        if(n == 1){
            cout<<0<<"\n";
            continue;
        }
        
        int cnt = 0;
        
        while(n > 1){
            if(n % 6 == 0){
                cnt++;
                n = n/6;
            }else if(n % 3 == 0) {
                cnt+=2;
                n = n/3;
            }else break;
        }
        
        
        if(n != 1) cout<<-1<<"\n";
        else cout<<cnt<<"\n";
    }
}