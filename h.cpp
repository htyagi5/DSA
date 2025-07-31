#include<bits/stdc++.h>
using namespace std;
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
    //     int L=nums[0];
    //     int j=nums.size();
    //     int SL=-1;
    //    for(int i=1;i<j;i++){
    //       if(nums[i]>L){
    //         SL=L;
    //         L=nums[i];
    //       }
    //    }
    //    if(SL==-1){
    //     L=nums[j-1];
    //    for(int i=j-1;i>0;i--){
    //       if(nums[i]>L){
    //          SL=L;
    //         L=nums[i];
    //       }
    //    }
    //    }

    int L=nums[0];
    int SL=-1;
    int j=nums.size();
    int a,b;
    for(int i=0;i<j;i++){
       a=i;
       b=i;
       
    }
       return SL;
    }
    int main(){
        vector<int>nums;
        nums.push_back(8);
        nums.push_back(8);
        nums.push_back(7);
        nums.push_back(5);
        nums.push_back(6);
        nums.push_back(4);
       int result= secondLargestElement(nums);
       cout<<result<<"";
    }
