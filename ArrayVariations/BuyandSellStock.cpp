#include "bits/stdc++.h"
using namespace std;
//Brute force
// int Stock(vector<int> a){
//     int buy=0;
//     int sell=0;
//      int maxprofit=0;
//     for(int i=0;i<a.size();i++){
//         for(int j=i;j<a.size();j++){
//              if(a[j]-a[i]>0){
//                 maxprofit=max(maxprofit,a[j]-a[i]);
//              }
//         }
//     }
//     return maxprofit;
// }
//TimeComplexity=O(N^2)
//SpaceComplexity=O(1)

//optimal approach
int Stock(vector<int>& prices) {
         int n=prices.size();
         int mini=INT_MAX;
         int maxprofit=0;
          for(auto it:prices){
              if(it<mini) mini=it;
                 maxprofit=max(maxprofit,it-mini);
              }
          return maxprofit;
          }
//Time Complexity=O(N)
//Space Complexity=O(1)

int main(){
    vector<int>nums={7,1,4,2,6,5,2};
    int result=Stock(nums);
    
        cout<<"maxprofit is= "<<result;
    return 0;
}