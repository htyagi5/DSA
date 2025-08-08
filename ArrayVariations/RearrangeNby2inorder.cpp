#include "bits/stdc++.h"
using namespace std;

// vector<int> Rearrange(vector<int>&a){
//     int n=a.size();
//     vector<int>b;
//     vector<int>c;
//     for(int i=0;i<n;i++){
//         if(a[i]<0) b.push_back(a[i]);
//         else c.push_back(a[i]);
//     }
//     for(int i=0;i<n/2;i++){
//       a[2*i]=c[i];
//       a[2*i+1]=b[i];
//     }
//   //   vector<int>num;
//   // for(int i=0;i<n/2;i++){
  //   //   num.push_back(c[i]);
  //   //   num.push_back(b[i]);
  //   // }
  //     return a;
  //     // return num;
// }
//TimeComplexity=O(N)+O(N/2)
//SpaceComplexity=O(N)


 vector<int> Rearrange(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n);

        int k=0;
        int i=0;
        int j=1;
        while(k<n){
            if(nums[k]>0){
                 a[i]=nums[k];
                  i+=2;
            }
            else {
                a[j]=nums[k];
                j+=2;
            }
            k++;
        }
        return a;
    }
    //TimeComplexity=O(N)
    //SpaceComplexity=O(N)

int main(){
    vector <int> nums={3,1,-2,-5,2,-4};
    vector<int>result=Rearrange(nums);
    for(auto it:result)
    cout<<it<<" ";
    return 0;
}