#include<iostream>

using namespace std;

void readarray(int *a,int n){
for(int i=0;i<n;i++){

    cin>>a[i];
}


}

bool inversecomp(int *a,int n1,int *b,int n2){
int i=n1;
int z=1;
int p;
while(i>0){
    int p=a[i-1];
    if(b[n2-p]!=z){return false;}
    i--;
    z++;
}
return true;
}

int main(){
    int a[100];
    int n1;
    cin>>n1;
    readarray(a,n1);
    int b[100];
    int n2;
    cin>>n2;
    readarray(b,n2);
    if(inversecomp(a,n1,b,n2)){cout<<"true";} else
        {cout<<"false";}

return 0;
}
