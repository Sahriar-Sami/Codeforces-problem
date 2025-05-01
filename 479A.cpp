#include<iostream>
using namespace std;
int main(){

int a,b,c,sum;
cin>>a>>b>>c;
if(a!=1&&b!=1&&c!=1){
    sum=a*b*c;
}
else if(a==1&&b==1&&c==1||a==1&&b!=1&&c==1){
    sum=a+b+c;
}
else if(a==1&&b!=1&&c!=1||a==1&&b==1&&c!=1){
    sum=(a+b)*c;
}
else if(a!=1&&b==1&&c!=1&&c>=a){
    sum=(a+b)*c;
}
else if(a!=1&&b==1&&c!=1&&a>c||a!=1&&b!=1&&c==1||a!=1&&b==1&&c==1){
    sum=(c+b)*a;
}


cout<<sum;
}
