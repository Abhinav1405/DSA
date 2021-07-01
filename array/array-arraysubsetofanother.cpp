string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        map[a1[i]]=1;
    }
    string s="Yes";
    for(int i=0;i<m;i++){
        if(map.count(a2[i])>0){
            continue;
        }
        else{
            s="No";
            break;
        }
        return s;
    }
}