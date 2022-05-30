#include<bits/stdc++.h>
using namespace::std;

vector<int> queens;
int n;

int backtraking(int pos){
    if(pos==n){
        return 1;
    }
    int res=0;
    for(int col=0;col<n;col++){
        bool valid=true;
        for(int j=0;j<pos;j++){
            if(queens[j]==col || abs(queens[j]-col)==abs(j-pos)){
                valid=false;
                break;
            }
        }
        if(valid){
            queens.emplace_back(col);
            res+=backtraking(pos+1);
            queens.pop_back();
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    int ans=backtraking(0);
    cout<<ans;
    return 0;
}