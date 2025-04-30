#include<iostream>
using namespace std;
int main(){

int k,w;
long long int n, cost=0;
cin>>k>>n>>w;
for(int i=1;i<=w;i++){
        long long int si=i*k;
    cost+=si;
}
if(cost>n){
cout<<cost-n;}
else{cout<<"0";}

}
