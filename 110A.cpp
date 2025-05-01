#include<iostream>
using namespace std;
int main(){
long long int n,w=0;
cin>>n;
while(n!=0){

        int a=n%10;
    if(a==4||a==7){n=n/10; w++;}
    else{
       n=n/10 ;
    }
}
if(w==4||w==7){ cout<<"YES";}
else{
    cout<<"NO";
}

}

