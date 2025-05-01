#include<iostream>
using namespace std;
int main(){

int n,p,q;
cin>>n>>p;
int a[p],c[n+1];
for(int i=0;i<n+1;i++){
    c[i]=0;

}
c[0]=1;
for(int i=0;i<p;i++){
    cin>>a[i];
    int w=a[i];
    c[w]=1;

}
cin>>q;
int b[q];
for(int i=0;i<q;i++){
    cin>>b[i];
     int w=b[i];
    c[w]=1;
}
int flag=0;
for(int i=0;i<=n;i++){
   if(c[i]==0){flag=1;break;}

}
if(flag==0){cout<<"I become the guy."; }
else{
    cout<<"Oh, my keyboard!";
}




}

