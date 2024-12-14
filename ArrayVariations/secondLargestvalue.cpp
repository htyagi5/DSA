#include<bits/stdc++.h>
using namespace std;
int SecondLargest(vector<int>& arr){
        int largest=arr[0];
        int slargest=-1;
        for(int i=1;i<arr.size();i++){
            if(largest<arr[i]){
                slargest=largest;
                largest=arr[i];
            }
            else if(slargest<arr[i] && arr[i]<largest){
                slargest=arr[i];
            }
        }
        return slargest;
    }
int main(){
    int i,n;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
   int secondlargest= SecondLargest(arr);
   
cout<<secondlargest;
    return 0;
}