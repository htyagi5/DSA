#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    
    for(int i=0;i<=n-2;i++){
    int min=i;
    for(int j=i ;j<n;j++){
        if(arr[min]>arr[j]){
         min=j;
        }
        swap(arr[min],arr[i]);
    }
    }
}
int main(){
    int i,n;
    cin>>n;
    int arr[10];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
     selection_sort(arr ,n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
//      cin>>a[i];
//     }

//     for(i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             int temp=0;
//         if(a[i]>a[j]){
//         temp=a[j];
//         a[j]=a[i];
//         a[i]=temp;
//         }
//         }
//     }
//     for(i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

