#include<iostream>

using namespace std;
int main(){

string a,b="";
cin>>a;
int j=0;
for(int i=0;a[i]!='\0';i++){
        a[i]=tolower(a[i]);
    if(a[i]!='a'&& a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&
       a[i]!='u'&& a[i]!='y'){

 b+='.';
    b+=a[i];
       }
       else{
   continue;
       }

}

cout<<b;

}
