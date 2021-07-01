#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int,int>map;
int main(){


int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int m;
cin>>m;
int b[m];
for(int i=0;i<m;i++){
    cin>>b[i];
}
int f=0;
    for(int i=0;i<m;i++){
        map[b[i]]=0;
    f++;

    }
        for(int i=0;i<n;i++){
            if(map.count(a[i])>0){

            }
            else{
        f++;
                map[a[i]]=0;
            }
        }
        return f;

    };
