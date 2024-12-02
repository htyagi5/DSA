#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>& a,int low,int mid,int high){
    vector<int> temp;
     int left=low;
     int right=mid+1;
     while(left<=mid && right<=high){
        if(a[left]<a[right]){
        temp.push_back(a[left]);
        left++;
     }
     else{
     temp.push_back(a[right]);
     right++;
     }
     }
     while(left<=mid){
        temp.push_back(a[left]);
        left++;
     }
     while(right<=high){
        temp.push_back(a[right]);
        right++;
     }
     for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
     }
}

void Mergesort(vector<int>& a,int low,int high ){
     if(low>=high) return;
     int mid=(low+high)/2;
     Mergesort(a,low,mid);
     Mergesort(a,mid+1,high);
     Merge(a,low,mid,high);
}

int main(){
    int i,n;
    cin>>n;
    vector<int> a(n);//this is the method to give size in vector
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    Mergesort(a,0,n-1);
    for(i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}



//Extra learning

    //vector<int> vec(5, 0);        // Vector of size 5 initialized with 0

    //vector<int> v = {1, 2, 3};

   // v.resize(5); // Increase size to 5, new elements are default-initialized to 0 