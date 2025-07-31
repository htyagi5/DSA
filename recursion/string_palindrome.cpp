#include<bits/stdc++.h>
using namespace std;
// void pal(int i,int n,char s[]){
//     if(i>=n/2){
//         cout<<"palindrome";
//         return ;
//         }
//     if(s[i]!=s[n-i]){
//         cout<<"NOT A PALINDROME";
//      return ;
//     }

//     pal(i+1,n-1,s);
// }
// int main(){
//     int i,n;
//     cout<<"enter the size of string: ";
//     cin>>n;
//     char s[10];
//     for(i=0;i<n;i++){
//         cin>>s[i];
//     }
//     pal(0,n-1,s);
//     return 0;
// }
bool pal(int i,char a[],int n){
    if(i>=n/2){
        
        return true;
    }
        if(a[i]!=a[n-i-1]){
            return false;
        }
    return pal(i+1,a,n);
}
int main(){
    int i,n;
    char a[10];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    bool result=pal(0,a,n);
    if(result==true)
      cout<<"palindrome";
      else
      cout<<"NOT palindrome";
}