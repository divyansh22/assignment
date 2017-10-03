#include<iostream>
using namespace std;

void printarray(int *a,int n){
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}

void bubblesort(int*a,int n){

for(int i=0;i<n-1;i++){
    for(int j=0;j<=n-2-i;j++){
        if(a[j]>a[j+1]){
          swap(a[j],a[j+1]);
        }
    }
}
}

void reversearray(int*a,int n){
for(int i=n-1;i>=0;i--){
    cout<<a[i]<<" ";
}
}

void selectionsort(int*a,int n){

for(int i=0;i<n-1;i++){

        int k=i;
    for( int j=i+1;j<n;j++){
        if(a[j]<a[k]){
          k=j;
        }
    }
        swap(a[k],a[i]);

}

}
void readarray(int a[],int n){
for(int i=0;i<n;i++){
    cin>>a[i];
}

}

void linearsearch(int *a,int n,int p){
    int i;
for( i=0;i<n;i++){
    if (a[i]==p){
            cout<<"found "<<p<<" at index "<<i;
    break;
            }
}

if (i==n){cout<<"not found";}

}

void largest(int *a,int n){
int l=a[0];
for(int i=1;i<n;i++){
    if(a[i]>l){
        l=a[i];
    }
}
cout<<"largest: "<<l;
}

void mergearray1(int*a,int n1,int*b,int n2){
int i=n1;
int j=0;
while(j<n2){
    a[i]=b[j];

    i++;
    j++;
}

}

void mergearray2(int*a,int m,int*b,int n){

int i=m-1;
int j=0;
int k=m+n-1;

while(i>=0){
    a[k]=a[i];
    k--;
    i--;

}
i=n;
k=0;
while(i<=m+n-1 && j<=n-1){
  if(a[i]<b[j]){
    a[k]=a[i];
    k++;
    i++;
  }
  else {
    a[k]=b[j];
    j++;
    k++;
  }

}

if(j!=n){
   while(j<=n-1){
    a[k]=b[j];
    k++;
    j++;
   }

}
}

void mergearray3(int*a,int m,int*b,int n){

int i=m-1;
int j=n-1;
int k=m+n-1;
while(i>=0 && j>=0){
    if(a[i]<b[j]){
        a[k]=b[j];
        k--;
        j--;
    }
    else{a[k]=a[i];
    i--;
    k--;
    }
}
if(j!=-1){
    a[k]=b[j];
    j--;
    k--;

}
}

int maxsubarray(int *a,int n){




}


int main(){
int a[100]={0};
int b[100]={0};
int c[100]={0};
/*readarray(a,5);
reversearray(a,5);
cout<<endl;
cout<<"enter key"<<endl;
int p;
cin>>p;
linearsearch(a,5,p);
cout<<endl;
largest(a,5);
cout<<endl;
bubblesort(a,5);
printarray(a,5);
cout<<endl;
readarray(b,5);
selectionsort(b,5);
printarray(b,5);
*/
/*readarray(a,3);
readarray(b,4);
mergearray3(a,3,b,4);
printarray(a,7); */
readarray(c,9);
cout<<
return 0;
}
