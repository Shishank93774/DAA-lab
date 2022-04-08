#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

void fun(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int &x: arr)cin>>x;
    int e;cin>>e;
    int m = sqrt(n);
    int i = m, cmp = 0;
    bool chk = false;
    for(; i<n; i+=m){
        cmp++;
        if(e<arr[i]){
            for(int j = i-m; j<i; j++){
                if(arr[j] == e){
                    chk = true;
                    cout<<"Present "<<cmp;
                    return;
                }
                cmp++;
            }
            if(!chk){
                cout<<"Not Present "<<cmp;
                return;
            }
        }
    }
    i -= m;
    while(i<n){
        cmp++;
        if(arr[i] == e){
            chk = true;
            cout<<"Present "<<cmp;
            return;
        }
        i++;
    }
    if(!chk){
        cout<<"Not Present "<<cmp;
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int TC;cin>>TC;
    while(TC--)fun(), cout<<"\n";
    return 0;
}
