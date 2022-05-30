#include<bits/stdc++.h>
using namespace::std;

int main(){
    int n, m, num;
    cin>>n>>m;

    queue<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        a.push(std::make_pair(num,i+1));
    }
    pair<int,int> tem;
    while(!a.empty()){
        if(a.size()==1){
            cout<<a.front().second;
            return 0;
        }
        if(a.front().first<=m){
            a.pop();
        }
        if(a.front().first>m){
            tem=std::make_pair(a.front().first-m,a.front().second);
            a.pop();
            a.push(tem);
        }
    }
}