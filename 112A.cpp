
#include<iostream>
#include<string>
using namespace std;
int main(){
int flag=0;
string a,b;
cin>>a>>b;
for(int i=0;i<a.length();i++){
    a[i]=tolower(a[i]);
    b[i]=tolower(b[i]);
}
for(int i=0;i<a.length();i++){
   if((int)a[i]<(int)b[i]){flag=-1;break;}
   else if((int)a[i]>(int)b[i]){flag=1;break;}
}

cout<<flag;

}
