//optimal approach
// Time complexity=O(m+n)
// space complexity=O(1)  exluding the a and b
#include<bits/stdc++.h>
using namespace std;
vector<int>Intersection(vector<int>&a,vector<int>&b){
    int m=a.size();
    int n=b.size();
    vector<int>in;
     int i=0;   
     int j=0;
     while(i!=m && j!=n){
        if(a[i]>b[j]){
           j++;
    }   
    else if(a[i]<b[j]){
        i++;
    }
    else{
        in.push_back(a[i]);
           i++;
           j++;
    }
     
}
    return in;
}
int main(){
    vector<int>n1={1,2,2,3,3,5,6};
    vector<int>n2={2,3,3,5,6,9,10,11,12};
    vector<int>result=Intersection(n1,n2);
    for(auto it:result ){
        cout<<it<<' ';
    }
    return 0;
}


// //brute force approach
// // Time complexity=O(m*n)
// // space complexity=O(n) due to that vis[n](extra space) exluding the a and b
// #include<bits/stdc++.h>
// using namespace std;
// vector<int>Intersection(vector<int>&a,vector<int>&b){
//     int m=a.size();
//     int n=b.size();
//     vector<int>in;
//     vector<int>vis(n,0);
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(a[i]==b[j] && vis[j]==0){
//                 in.push_back(a[i]);
//                 vis[j]=1;
//                 break;
//             }
//             else if(a[i]<b[j]){
//                 break;
//             }

//         }
//     }
//     return in;
// }
// int main(){
//     vector<int>n1={1,2,2,3,3,5,6};
//     vector<int>n2={2,3,3,5,6,9,10,11,12};
//     vector<int>result=Intersection(n1,n2);
//     for(auto it:result ){
//         cout<<it<<' ';
//     }
//     return 0;
// }