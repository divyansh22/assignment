#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int a[100];
for(int i=0;i<n;i++){cin>>a[i];}
int m=-1000;
for(int i=0;i<n;i++){
    if( a[i]>m ){m=a[i];}


}
cout<<m;

return 0;
}
