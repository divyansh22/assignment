#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[100];
for(int i=0;i<n;i++){cin>>a[i];}
int m;
cin>>m;
if(n%2!=0){
int s=n/2;}
else{s=(n-1)/2;}
for( int i=0; ;i++ ){
    if(a[s]>m){
        s=s/2;}
    else if(a[s]<m){
      s=(n+s)/2;}
    else {break;}
}
cout<<s;
return 0;
}
