#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int i=0;
while(n-2!=i){
int k=a[i];
a[i]=a[n-1-i];
a[n-1-i]=k;
i++;
}
for(int i=0;i<n;i++){
    cout<<a[i];
}

}
