#include<iostream>

using namespace std;
printarray(int*a,int n){
for(int i=0;i<n;i++){

    cout<<a[i]<<" ";

}

}
void readarray(int a[],int n){
for(int i=0;i<n;i++){
    cin>>a[i];

}

}

void bubblesort(int *a,int n){
for(int i=0;i<n-1;i++){

    for(int j=0;j<=n-2-i;j++){

        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }


    }

}

}



int main(){

    int a[100];
    readarray(a,5);
    bubblesort(a,5);
    printarray(a,5);

return 0;
}
