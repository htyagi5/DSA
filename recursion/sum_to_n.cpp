#include<bits/stdc++.h>
using namespace std;
// void add(int i,int sum,int upto){
//     if(i>upto){
//     cout<<"sum is :"<<sum;
//     return;
//     }
//     add(i+1,sum+i,upto);
// }
// // void add(int i,int sum){
// //     if(i<1){
// //     cout<<"sum is :"<<sum;
// //     return;
// //     }
// //     add(i-1,sum+i);
// // }
// int main(){
// int n,i; 
// cout<<"ENTER from where : ";
// cin>>i;
// cout<<endl<<"ENTER TILL WHAT : ";
// cin>>n;
// add(i-1,0,n);
// // add(n,0);
//     return 0;
// }
int sum(int n)
{
    if(n==0){
        return 0;
    }
return n+sum(n-1);

}
int main(){
    int n;
    cout<<"enter upto what :";
    cin>>n;
    cout<<"sum is:"<<sum(n);
    return 0;
}