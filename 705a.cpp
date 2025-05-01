#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
string s="";

for(int i=1;i<=n;i++){
    if(i%2==1){
        s+="I hate ";
        if(i==n){
            s+="it";
        }
        else{
            s+="that ";
        }
    }
    else{
              s+="I love ";
        if(i==n){
            s+="it";
        }
        else{
            s+="that ";
        }

    }

}

cout<<s;



}
