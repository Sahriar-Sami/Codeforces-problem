
#include<iostream>
using namespace std;
int main(){
int num1=0,num2=0,num3=0,sign=0;
string a,b="";
cin>>a;
for(int i=0;i<a.length();i++){

    if(a[i]=='1'){num1++;}
    else if(a[i]=='2'){num2++;}
    else if(a[i]=='3'){num3++;}
    //else if(a[i]=='+'){sign++;}
}
for(int i=0;i<a.length();i++){

    if(num1>0){b+='1';num1--;b+='+';}
    else if(num2>0){b+='2';num2--;b+='+';}
    else if(num3>0){b+='3';num3--;b+='+';}

}
for(int i=0;i<a.length();i++){
    cout<<b[i];
}
}
