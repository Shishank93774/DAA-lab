#include<iostream>
#include<vector>

using namespace std;

void fun(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int &x: arr)cin>>x;
    int e;cin>>e;
    bool chk = false;
    for(int i = 0; i<n; i++){
        if(e == arr[i]){
            chk = true;
            cout<<"Present "<<i+1;
            return;
        }
    }
    if(!chk){
        cout<<"Not present "<<n;
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int TC;cin>>TC;
    while(TC--)fun(), cout<<"\n";
    return 0;
}

