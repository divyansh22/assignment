#include<iostream>

using namespace std;

/*printarray(int*a,int n){

}
}*/
void addarrays(int* a,int* b,int n){
int i=n-1;
int j=n-1;
int k=0;
int sum;
int carry=0;
int c[n+1]={0};
while(i>=0){
sum=(a[i]+b[j]+carry)%10;
carry=(a[i]+b[j])/10;

c[n-k]=sum;
i--;
j--;
k++;

}

if(carry==0){
for(int i=1;i<=n;i++){
    cout<<c[i]<<" ";
//printarray(c,n+1);
}
}
else{
        c[0]=carry;
   for(int i=0;i<=n;i++){
    cout<<c[i]<<" ";
//printarray(c,n+1);
}
}


}
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    for(int i=0;i<n;i++){
        cin>>b[i];

    }

addarrays(a,b,n);




return 0;
}
