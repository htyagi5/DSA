#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,c;
    cin>>n;
    int a[10];
    for(i=0;i<n;i++)
{
    cin>>a[i];
}
int hash[13]={0};
for(i=0;i<n;i++){
    hash[a[i]]+=1;
}
int q;
cin>>q;
while(q!=0)
{
    cin>>c;
    cout<<hash[c]<<endl;
q--;
}
return 0;
}


//we can only assign arr[10^6] in int main() above it give segmentation error and with boolean arr[10^7] inside int main()
//and globally we can assign arr[10^7]  and with boolean arr[10^8] above that give segmentation faault
