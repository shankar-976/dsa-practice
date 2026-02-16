#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n-1);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    int miss = 0;
    for(int i=0;i<n;i++){
        if(a[i] != i+1){
         miss = i+1;
         break;
        }
    }

    cout<<miss;

}