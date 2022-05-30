#include<bits/stdc++.h>
using namespace::std;

int main(){
    
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    set<int> input;
    int N=4;
    int tem;
    for (int i = 0; i < N; i++)
    {
        cin>>tem;
        input.insert(tem);
    }

    cout<<4-input.size()<<endl;

    return 0;
}