
#include<iostream>
#include<string>
using namespace std;
int main(){
int flag=0;
string a;
cin>>a;
for(int i=0;i<a.length();i++){

    if(a[i]=='H'||a[i]=='Q'||a[i]=='9'){flag=1;cout<<"YES";return 0; }
}



cout<<"NO";

}

