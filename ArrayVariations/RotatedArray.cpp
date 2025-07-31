//optimal approach  for right rotation
#include<bits/stdc++.h>
using namespace std;
void  rotate(vector<int> & a,int i,int j){
       int d;
       cin>>d;
       d=d%j;
       reverse(a.begin(),a.end());
       reverse(a.begin(),a.begin()+d);
       reverse(a.begin()+d,a.end()); 
}
int main(){                               
   int i,n;
   cin>>n;
   vector<int> a(n);
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   rotate(a,0,n);
   for(i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
    return 0;
} 
// optimal approach  for left rotation
// #include<bits/stdc++.h>
// using namespace std;
// void  rotate(vector<int> & a,int i,int j){
//        int d;
//        cin>>d;
//        d=d%j;
//        reverse(a.begin(),a.begin()+d);
//        reverse(a.begin()+d,a.end()); 
//        reverse(a.begin(),a.end());
// }
// int main(){                               
//    int i,n;
//    cin>>n;
//    vector<int> a(n);
//    for(i=0;i<n;i++){
//     cin>>a[i];
//    }
//    rotate(a,0,n);
//    for(i=0;i<n;i++){
//     cout<<a[i]<<" ";
//    }
//     return 0;
// } 

//Time complexity is O(d)+O(n-d)+O(n)=O(2n)  it is increased but space decrease
////space complexity=O(n) only

//Brute force approach

// #include<bits/stdc++.h>
// using namespace std;
// void  rotate(vector<int> & a,int i,int j){
//        int times;
//        cin>>times;
//       int  d=times%a.size();
//        vector<int> temp;
//        for(int k=0;k<d;k++){
//         temp.push_back(a[k]);
//        }

//        int l=0;
//        for(int k=d;k<=j;k++){
//         a[l]=a[k];
//         l++;
//        }
//        for(int k=j-d+1;k<=j;k++){
//         a[k]=temp[j-k];
//        }
//     //    int m=0;
//     //    for(int k=l;k<=j;k++){
//     //     a[k]=temp[m];
//     //     m++;
//     //    }
// }
// int main(){
//    int i,n;
//    cin>>n;
//    vector<int> a(n);
//    for(i=0;i<n;i++){
//     cin>>a[i];
//    }
//    rotate(a,0,n-1);
//    for(i=0;i<n;i++){
//     cout<<a[i]<<" ";
//    }
//     return 0;
// } 

//time complexity= O(d)+O(n-d)+O(d)=O(n+d)
//space complexity=O(n)+O(d)
//                      temp vala space