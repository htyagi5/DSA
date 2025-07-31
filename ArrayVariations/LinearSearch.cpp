#include<bits/stdc++.h>
using namespace std;
int Linear(vector<int> &a,int k){
    for(int i=0;i<a.size();i++){
        if(a[i]==k){
            return i;
        }
    }
    return -1;
}
int main(){
    int i,n;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int position =   Linear(a,k);
cout<<"Found At = "<<position+1;
    return 0;
}