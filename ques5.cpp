#include<iostream>

using namespace std;


void readarray(int *a,int n){
for(int i=0;i<n;i++){
    cin>>a[i];
}

}
void printarray(int *a,int n){
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";

}
}
void inverse (int*a,int n){
int i=n;
int b[n];
int z=1;
while(i>0){
    int p= a[i-1];
    b[n-p]=z;

    z++;
    i--;
}

printarray(b,5);


}


int main(){
    int a[100]={0};
    readarray(a,5);
    inverse(a,5);


return 0;
}
