#include<iostream>
using namespace std;

int main(){
long long int n;
cin>>n;
long long int a[n],big=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>big){big=a[i]; }
}
long long int b[big+1],c[big+1]={0};
for(int i=0;i<=big;i++){
        int countn=0;
for(int j=0;j<n;j++ ){
    if(a[j]==i){countn++;}
}
 b[i]=countn;

}
for(int j=big;j>0;j--){
    long long int points=0;
for(int i=j;i>0;i-=2){
  long long int a=  b[i]*i;
  points+=a;


}c[j]=points;
}

long long ans=0;
for(int i=big;i>=0;i--){
if(ans<c[i]){ans=c[i];}
}


cout<<ans;






}
