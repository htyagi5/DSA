#include<bits/stdc++.h>
using namespace std;
void Insertion_sort(int a[],int n){
    for(int i=0;i<n;i++){
       int  j=i;
        while(j>0 && a[j]<a[j-1]){
            swap(a[j],a[j-1]);
            j--;
            
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
    Insertion_sort(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,n;
//     cin>>n;
//     int a[10];
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(i=0;i<n-1;i++){
//         int j=i+1;
//             if(a[i]>a[j]){
//                 swap(a[i],a[j]);
//             }
//             int q=i;
//             while( q!=0){
//                if(a[q]<a[q-1]){
//                 swap(a[q],a[q-1]);
//                }
//                 q--;
//             }
//     }
//     for(i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }



