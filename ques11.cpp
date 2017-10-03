#include<bits/stdc++.h>

using namespace std;


readarray(int*a,int n){
for(int i=0;i<n;i++){
    cin>>a[i];
}
}

printarray(int*a,int n){
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}

void intersection(int*a,int*b,int n){
int i=0;
int k=0;
int j;
int c[100]={0};
while(i<n){
         j=0;
while(j<n){


    if(a[i]==b[j]){

        c[k]=a[i];
        k++;
        b[j]=-1000;
        break;

    }
    j++;
}
i++;
}
printarray(c,k);
///apply sorting now
}

void intersection2(int *a,int *b,int n){
sort(a,a+n);
sort(b,b+n);


int i=0;
int c[100]={0};
int j=0;

while(i<n){

    if(a[i]==b[i]){
            c[j]=a[i];

        j++;
    }
    i++;
}
printarray(c,j);

}


int main(){

int a[100];
int b[100];

int n;
cin>>n;
readarray(a,n);
readarray(b,n);
intersection(a,b,n);

return 0;
}
