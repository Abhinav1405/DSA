#include<algorithm>
int PalinArray(int a[], int n)
{
int count = 0;
for(int i = 0; i < n; i++){
string str1 = to_string(a[i]);
string str2;
for(int i = 0; i < str1.length(); i++){
str2 += str1[i];
}
reverse(str2.begin(), str2.end());
if(str1 == str2){
count++;
}
}
if(count == n){
return 1;
}else{
return 0;
}
}
