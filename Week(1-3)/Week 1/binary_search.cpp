#include<iostream>
#include<vector>

using namespace std;

void fun(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int &x: arr)cin>>x;
    int e;cin>>e;
    int l = 0, r = n-1;
    bool chk = false;
    int cmp = 0;
    while(l<=r){
        int mid = (l+r)>>1;
        cmp++;
        if(arr[mid] < e){
            l = mid+1;
        }else if(arr[mid] > e){
            r = mid-1;
        }else{
            chk = true;
            cout<<"Present "<<cmp;
            return;
        }
    }
    if(!chk){
        cout<<"Not present "<<cmp;
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int TC;cin>>TC;
    while(TC--)fun(), cout<<"\n";
    return 0;
}

