#include<iostream>
using namespace std;
int pivot(int a[],int s,int e){
    int i=s-1;
    for(int j=s;j<e;j++){
        if(a[e]>a[j]){
            i++;
            swap(a[i],a[j]);
        }
    }
    i++;
    swap(a[i],a[e]);
    return i;
}
void quicksort(int a[],int s,int e){
    if(e<=s){return ;}
    int p=pivot(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);


}
int main(){

int t;
cin>>t;
int out[t];
for(int i=0;i<t;i++){
        int n;
    cin>>n;
    int a[n];
    out[i]=0;
    int u=0,k=0,b=0;
for(int j=0;j<n;j++){
    cin>>a[j];

}
int flag=0;
quicksort(a,0,n-1);
for(int j=0;j<n;j++){

 for(int s=j+1;s<n;s++){
    if(a[j]!=a[s]){flag=1;

    }
    else{
        flag=0;break;
    }
 }
 if(flag==1){u++;}
 else{k=j+1;
     for(int s=k;s<n;s++){
  if(a[j]!=a[s]){b++;

  }
  else if(s==n-1){
    b++;
  }
 }

 }
}
out[i]=u+k;
}




for(int j=0;j<t;j++){
    cout<<out[j]<<endl;
}
}
