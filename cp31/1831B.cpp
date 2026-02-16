#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n) , b(n);
        unordered_map<int,int> c;

        for(int i=0;i<n;i++){
             cin>>a[i];
            c[a[i]]++;
        }
           
        for(int i=0;i<n;i++){
            cin>>b[i];
            c[b[i]]++;
        }
        
        int maxi = 0;
        for(auto it : c) maxi = max(it.second , maxi);

        cout<<maxi<<"\n";
        
    }
}