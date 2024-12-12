#include<bits/stdc++.h>
using namespace std;
bool Checksorted(vector<int>& a){
   for(int i=0;i<a.size()-1;i++){
    if(a[i]>=a[i+1]){
     return false;
    }
   }
   return true;
}
int main(){
    int i,n;
    cin>>n;  
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
bool sort=Checksorted(a);
cout<<sort;
    return 0;
}