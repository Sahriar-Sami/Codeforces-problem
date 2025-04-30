#include<iostream>
using namespace std;
int main(){

int n,x=0;
cin>>n;
string a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){

    for(int j=0;j<a[i].length();j++){
        char c=a[i][j];
        if(c=='+'){x++;break;}
        else if(c=='-'){x--;break;}
    }
}
cout<<x;


}
