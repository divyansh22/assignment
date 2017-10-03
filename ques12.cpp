#include<iostream>

using namespace std;

void target(int *a,int n,int t){

int i=0;
int j=n-1;
while(j>i){
 if(a[i]+a[j]==t){
        cout<<a[i]<<" and "<<a[j]<<endl;
    i++;
    j--;

 }
 else if(a[i]+a[j]>t){

    j--;

  }
  else{
    i++;
  }

}

}

int main(){
    int n;
    cin>>n;
    int a[100]={0};
    for(int i=0;i<n;i++){

        cin>>a[i];
    }
    int t;
    cin>>t;
    target(a,n,t);



return 0;
}
