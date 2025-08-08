#include "bits/stdc++.h"
using namespace std;

//Better approach
// int MaxSum(vector <int> & a){
//     int n=a.size();
//     int maxsum=INT_MIN;
//     for (int i=0;i<n;i++){
//         int temp=0;
//         for(int j=i;j<n;j++){
//           temp+=a[j];
//            maxsum=max(maxsum,temp);
//         }
//     }
//     return maxsum;
// }
//Time complexity=O(N^2) 
//Space complexity=>O(1)


//optimal =>(Kadane Algo)
int MaxSum(vector <int> & a){
    int n=a.size();
    int maxsum=INT_MIN;
    int sum=0;
    int m=0;
    int l=0;
    int start=0;
    for (int i=0;i<n;i++){
        if(sum==0){
           start=i;
        }
         sum+=a[i];
         if(sum<0) sum=0;
         if(sum>maxsum){
            maxsum=sum;
           m=start;
           l=i;
         }
    }
    //for finding the subarray
    for(int i=m;i<=l;i++){
        cout<<a[i]<<" ";
    }
    return maxsum;
}
//Time complexity=O(N)
//space complexity =>O(1)
int main(){
    vector<int> nums={-2,-3,4,-1,-2,1,5,-3};
    int result=MaxSum(nums);
    cout<<"maxsum: "<<result;
    return 0;
}