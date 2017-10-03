#include<iostream>
using namespace std;

void readarray(int *a,int n){
for(int i=0;i<n;i++){
    cin>>a[i];
}
}
bool inverse(int *a,int n){
int i=n;
int b[n];
int z=1;
while(i>0){
    int p=a[i-1];

    b[n-p]=z;
    z++;
    i--;
}
for(int j=0;j<n;j++){
    if (a[j]!=b[j]){return false;}
}
return true;

}

int main(){
    int a[100];
readarray(a,10);
if(inverse(a,10)){
    cout<<"MIRROR INVERSE";
}
else{cout<<"NOT A MIRROR INVERSE";}

return 0;
}
