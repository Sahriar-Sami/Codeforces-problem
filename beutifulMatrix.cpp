#include<iostream>
using namespace std;
int main(){


int a[5][5],row,column,out=0;
for(int i=0;i<5;i++){
 for(int j=0;j<5;j++){
    cin>>a[i][j];
    if(a[i][j]==1){row=i+1;column=j+1;}
else{ continue;}
}
}
if(row>3){
    out=row-3;
}
else{
    out=3-row;
}
if(column>3){
    out+=(column-3);
}
else{
    out+=(3-column);
}
cout<<out;

}
