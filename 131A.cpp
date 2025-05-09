#include<iostream>
#include<string>
using namespace std;
int main(){
  string a;
  cin>>a;
  int flag=0,flag2=0;
  if(a[0]>='A'&&a[0]<='Z'){flag=1;
   for(int i=1;i<a.length();i++){
       if( a[i]>='a'&&a[i]<='z'){
        cout<<a;
        return 0;
       }
       else{
        continue;
       }

    }
    for(int i=0;i<a.length();i++){
      char c=(char)(((int)a[i])+32);
      a[i]=c;

    }
    cout<<a;
    return 0;

  }
  else if(a[0]>='a'&&a[0]<='z'){flag=2;
    for(int i=1;i<a.length();i++){
       if( a[i]>='a'&&a[i]<='z'){
        cout<<a;
        return 0;
       }

    }
     char c=(char)(((int)a[0])-32);
      a[0]=c;
    for(int i=1;i<a.length();i++){
      char c=(char)(((int)a[i])+32);
      a[i]=c;

    }
    cout<<a;
    return 0;

    }







}
