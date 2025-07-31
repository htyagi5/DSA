//my main galti thi ki mai query ko int le rha tha instead of char query 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,n;
//     char a[26];
//     char arr[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//     char arr1[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

//     cin>>n;
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int hash[26]={0};
//     for(i=0;i<n;i++){
//      hash[a[i]- arr[0]]+=1;
//     }
//     int q;
//     char query;
//     cin>>q;
//     while(q!=0){
//         cin>>query;
//         cout<<hash[query- arr[0]]<<" ";
//         q--;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i;
//     string s;
//         cin>>s;
//     int hash[26]={0};
//     for(i=0;i<s.size();i++){
//      hash[s[i]-'a']+=1;//this s[i]-'a' will autocast to respective ascii value
//     }
//     int q;
//     char query;
//     cin>>q;
//     while(q!=0){
//         cin>>query;
//         cout<<hash[query-'a']<<" ";
//         q--;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    string s;
        cin>>s;
    int hash[256]={0};
    for(i=0;i<s.size();i++){
     hash[s[i]]+=1;
    }
    int q;
    char query;
    cin>>q;
    while(q!=0){
        cin>>query;
        cout<<hash[query]<<" ";
        q--;
    }
    return 0;
}