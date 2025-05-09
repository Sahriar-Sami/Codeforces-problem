#include<iostream>
using namespace std;
long long int typedef ln;
struct comp {

ln m;
ln c;
int pivot(struct comp a[],int s,int e){
    int i=s-1;
    for(int j=s;j<e;j++){
        if(a[e].m>a[j].m){
            i++;

            struct comp temp =a[j];
                a[j]=a[i];
                a[i]=temp;
        }
    }
    i++;
    struct comp temp =a[i];
                a[i]=a[e];
                a[e]=temp;

    return i;
}
void quicksort(struct comp a[],int s,int e){
    if(e<=s){return ;}
    int p=pivot(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);


}
void mergesort(struct comp a[],ln l,ln r){
if(l>=r){
        return;
    }
    ln m=(l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);

           struct comp temp[r-l+1];
           ln i=l,j=m+1;
    for(ln s=0;s<r-l+1; s++){

    if(i>m){temp[s]=a[j];j++;}
    else if(j>r){temp[s]=a[i];i++;}
    else if(a[i].m<a[j].m){temp[s]=a[i];i++;}
    else if(a[i].m>=a[j].m){temp[s]=a[j];j++;}

}
ln q=0;
for(ln k=l;k<=r;k++){

    a[k]=temp[q];q++;


}
}








    void sortbym(struct comp a[],int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(a[j].m>a[j+1].m){struct comp temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp; }
            }
        }

    }
    public:
    void sortbyc(struct comp a[],int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(a[j].c>a[j+1].c){struct comp temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; }
            }
        }

    }

};
typedef struct comp fr;

ln rec(fr a[],int i,int d,int n,int con){
    if(i>=n){return 0;}

   if(a[con].m-a[i].m>=d||a[con].m-a[i].m<=-d){
        if(i==con){ return a[i].c;}
        else{return 0; }
        }



  return a[i].c+rec(a,i+1,d,n,con);
}


int main(){
ln n,d;
cin>>n>>d;
fr g[n+1];
ln m[n];
for(int i=0;i<n;i++){
    cin>>g[i].m>>g[i].c;
}
g[n].c=0;
g[n].m=0;
fr temp;
temp.mergesort(g,0,n-1);
/*for(int i=0;i<n;i++){
    m[i]=rec(g,i,d,n+1,i);
    //cout<<g[i].c<<" "<<m[i]<<endl;


    if(m[i]>ans){ans=m[i];}
}*/


ln s=0,e=0,sum=0,ans=0;
while(e>=s&&e<n){
    ans=max(ans,sum);

    if(g[e].m-g[s].m<d){
        sum+=g[e].c;
        e++;
    }
    else{
        sum-=g[s].c;
        s++;
    }
}

ans=max(ans,sum);




cout<<ans;
}
