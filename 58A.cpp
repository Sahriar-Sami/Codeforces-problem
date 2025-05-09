#include<iostream>
using namespace std;
int main(){
string s,r="",q="hello";
cin>>s;
int j=0;
for(int i=0;i<s.length();i++){
char c=s[i];

       if(c==q[j]) {r+=q[j];j++; }
    else{continue;}


}

if(r=="hello"){cout<<"YES";}
else{
    cout<<"NO";
}

}
