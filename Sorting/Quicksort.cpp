//FOR decending

#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> & a,int low ,int high)
{
    int pivot=low;
     int i=low;
     int j=high;
    while(i<j){
        while(a[i]>=a[pivot] && i<=high){
            i++;
        }
        while(a[j]<a[pivot] && j>low){
            j--;
        }
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    swap(a[pivot],a[j]);
    return j;
}
void Quicksort(vector<int> & a,int low,int high){
    if(low<high){
    int partitionindex=partition(a,low,high);
    Quicksort(a,low,partitionindex-1);
    Quicksort(a,partitionindex+1,high);
    }
}
int main(){
    int n,i;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    Quicksort(a,0,n-1);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
//FOR ASCENDING 

// #include<bits/stdc++.h>
// using namespace std;
// int partition(vector<int> & a,int low ,int high)
// {
//     int pivot=low;
//      int i=low;
//      int j=high;
//     while(i<j){
//         while(a[i]<=a[pivot] && i<=high){
//             i++;
//         }
//         while(a[j]>a[pivot] && j>low){
//             j--;
//         }
//         if(i<j){
//             swap(a[i],a[j]);
//         }
//     }
//     swap(a[pivot],a[j]);
//     return j;
// }
// void Quicksort(vector<int> & a,int low,int high){
//     if(low<high){
//     int partitionindex=partition(a,low,high);
//     Quicksort(a,low,partitionindex-1);
//     Quicksort(a,partitionindex+1,high);
//     }
// }
// int main(){
//     int n,i;
//     cin>>n;
//     vector<int> a(n);
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     Quicksort(a,0,n-1);
//     for(i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }