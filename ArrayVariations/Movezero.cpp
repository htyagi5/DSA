//optimal approach
//TWO POINTER approach which should be simple and i made it complex
#include<bits/stdc++.h>
using namespace std;
    void Move(vector<int>&a,int start,int end){
      int j=0;
      for(int i=start;i<end;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
          j++;  
        }
      }
    }  
int main(){
    int i,n;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    Move(a,0,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// void Move(vector<int> &a,int start,int end){
//     int index=0;
// for(int i=start;i<end;i++){
//     if(a[i]!=0)
//     a[index++]=a[i];
// }
// for(int i=index;i<end;i++){
//     a[i]=0;
// }
// } 
// int main(){
//     int i,n;
//     cin>>n;
//     vector<int> a(n);
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     Move(a,0,n);
//     for(i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }
    
    
    //void Move(vector<int> &a,int start,int end){
    //  int i,j;
    //  j=0;
    //  i=1;
    //  for(int k=start;k<end;k++){
    //     if(i<end){
    //     if(a[j]!=0 ){
    //         j++;
    //         i++;
    //     }
    //     else if(a[j]==0){
    //         if(a[i]==0){
    //         i++;
    //         }
    //         else{
    //         swap(a[i],a[j]);
    //         j++;
    //         }
    //     }
    //   }   
    // }
    //}