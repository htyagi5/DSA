 //modify it from your phonè code
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
int i,j;
char b[12];
char a[5]={'a', 'e', 'i', 'o', 'u'};
cin>>i;
for(j=0;j<i;j++){
cin>>b[j];
}
int count=0;
for(j=0;j<i;j++){
for(int k=0;k<5;k++){
if(a[k]==b[j]){
count++;
break;
}
}
if(count==2) {
break;
}
}
if(count==2){
cout<<" happy"<<endl;
}
else{
cout<<"sad"<<endl;
}
for(int j=0;j<i;j++){
cout<<b[j];
}
return 0;
}
