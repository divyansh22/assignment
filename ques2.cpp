#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[100];
for(int i=0;i<n;i++){cin>>a[i];}

int m;
cin>>m;
int j,i;
for(i=0;i<n;i++){

    if(a[i]==m){
        j=i;
        break;}
    }
    if(i==n){cout<<-1;}
    else{cout<<j;}

return 0;
}
