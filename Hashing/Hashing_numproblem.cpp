//map solves the problem of a[10^7] as here map only take keys and gather its values and rest remain 0
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     //in map default keys values are 0

//     map<int,int> mpp;
//     int a[10];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         mpp[a[i]]++;
//     }
//     for(auto it: mpp){
//         cout<<it.first<<"-->"<<it.second<<endl;
//     }//this prove that map stores keys in  ascending order
//     //it.first contain keys  and it.second are its value
//     int q;
//     cin>>q;
//     int query;
//     while(q!=0){
//         cin>>query;
//         cout<<mpp[query]<<" ";
//         q--;
//     }
//     return 0;
// }


//TIME COMPLEXITY of Map
// there is two process storing->  log(N)  in all best ,avg and worst
                    //  Fetching-> log(N) in all best ,avg and worst



//UNORDERED MAP-->not give things in sorted manner
 #include<bits/stdc++.h>
using namespace std;
int main(){
    //in unorder_map default keys values are 0

    unordered_map<int,int> mpp;
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    for(auto it: mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
    }//this prove that map stores keys in  ascending order
    //it.first contain keys  and it.second are its value
    int q;
    cin>>q;
    int query;
    while(q!=0){
        cin>>query;
        cout<<mpp[query]<<" ";
        q--;
    }
    return 0;
}


//TIME COMPLEXITY of Map
// there is two process storing-> O(1) in  best ,avg  but in worst it is O(N) 
                    //  Fetching-> O(1) in  best ,avg  but in worst it is O(N) 

// this is because in unordered it is not sorted which makes it more optimize than map as there is sorting time added to


//when worst case came then map is best becaluse in   unordered O(N^2) 