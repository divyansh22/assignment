#include<iostream>

using namespace std;

void selectionsort(int*a,int n){
int i=0;
int k;
int j;
while(i<n){

 k=i;
 j=i+1;
 while(j<n){
    if(a[j]<a[i]){
        k=j;
    }
    j++;

 }
    swap(a[k],a[i]);
    i++;
}
for(int p=0;p<n;p++){
    cout<<a[p]<<" ";
}


}

int  main(){
int  a[100]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

     selectionsort(a,n);
return 0;
}
