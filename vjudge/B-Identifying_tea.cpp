#include<bits/stdc++.h>
using namespace::std;

int main(){
    //freopen("input.txt","r",stdin)
    //freopen("out.txt","r",stdout)
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int t;
    vector<int> ans;
    int tem;
    int out=0;
   
    while (cin>>t)
    {
        for (int i = 0; i < 5; i++)
        {
            cin>>tem;
            ans.push_back(tem);
            if(t==tem){
                out++;
            }
        }
        cout<<out<<endl;
        out=0;
        ans.clear();
    }
    return 0;
}