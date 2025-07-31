#include<bits/stdc++.h>
using namespace std ;
void Bubble_sort(int a[],int n){
for(int i=n-1;i>0;i--){
    int didswap=0;
    for(int j=0;j<=i-1;j++){
     if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        didswap=1;
     }
    }
    if(didswap==0){
        break;
    }
}
}
int main(){
    int i,n;
    cin>>n;
    int a[10];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    Bubble_sort(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
