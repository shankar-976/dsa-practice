#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];

    int maxi = 0;
    for(int i=0;i<n-1;i++){
        if(a[i+1] < a[i]) maxi = max(a[i]-a[i+1]+1 , maxi);
    }

    cout<<maxi;
    
}