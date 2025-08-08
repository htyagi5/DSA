#include "bits/stdc++.h"
using namespace std;

//Better soln +>(Hashing)
// variety1
// string twoSum(vector<int>& nums, int target) {
//           map<int,int> mpp;
//         for(int i=0;i<nums.size();i++){
//             int require=target-nums[i];
//             int a=nums[i];
//             if(mpp.find(require)!=mpp.end()){
//                 return "Yes"
//             }
//             mpp[a]=i;
//             }
//         return "No";
//         }
// variety2
// vector<int> twoSum(vector<int>& nums, int target) {
//           map<int,int> mpp;
//         for(int i=0;i<nums.size();i++){
//             int require=target-nums[i];
//             int a=nums[i];
//             if(mpp.find(require)!=mpp.end()){
//                 return {mpp[require],i};
//             }
//             mpp[a]=i;
//             }
//         return {-1,-1};
//         }
        //time complexity=>O(N logN)(ordered map) && O(N)(unordered at best and avg) but O(N^2){because of finding}
   
//Optimal(2 pointer approach) 
//variety1
    //    string twoSum(vector<int>& nums, int target) {
    //     int n=nums.size();
    //       sort(nums.begin(),nums.end());
    //       int left=0,right=n-1;
    //       while (left<right){
    //         int sum=nums[left]+nums[right];
    //         if(sum<target){
    //             left++;
    //         }
    //         else if(sum>target){
    //             right--;
    //         }
    //         else{
        //             return "yes";
        //         }
        //       }
        //    return "No";
        // }
        //Time complexity=O(N)
//Variety 2
    //    Better one is optimal too
    //this soln is given below not work for identical values in nums ex [3,3] and target=6
vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
         map<int,int>mpp;
         for(int i=0;i<n;i++){
            mpp[nums[i]]=i;
         }
         sort(nums.begin(),nums.end());
         int left=0,right=n-1;
         while(left<right){
            int sum=nums[left]+nums[right];
            if(sum>target){
                right--;
            }
            else if(sum<target){
                left++;
            }
            else{
                return {mpp[nums[left]],mpp[nums[right]]};
            }
         }
         return {-1,-1};
    }
    //Time complexity=>O(2N) 

int main(){
   vector<int>num={3,2,4};
   int target;
   cout<<"enter target: ";
   cin>>target;
   vector <int> result=twoSum(num,target);
//    string result=twoSum(num,target);
    // cout<<result;
    cout<<'['<<result[0]<<','<<result[1]<<"]";
        return 0;
}