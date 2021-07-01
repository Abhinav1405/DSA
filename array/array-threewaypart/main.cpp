void threeWayPartition(int arr[], int n, int a, int b)
{ int k=0;

int j=0;
for(int i=0;i<n;i++){
    if(arr[i]<a){

    int l=arr[i];
    arr[i]=arr[j];
    arr[j]=l;
       j++;
    }
}
for(int i=0;i<n;i++){
    if(arr[i]>=a&&arr[i]<=b){

    int l=arr[i];
    arr[i]=arr[j];
    arr[j]=l;
    j++;
    }
}


}
