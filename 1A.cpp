#include<iostream>
#include<Math.h>
using namespace std;
int main(){
double n,m,a;

cin>>n>>m>>a;
long long int x=ceil(n/a)*ceil(m/a);
cout<<x;
}
