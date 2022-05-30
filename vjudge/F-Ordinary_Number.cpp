#include<bits/stdc++.h>
using namespace::std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    int n,tem;

    cin>>n;
    int cont=0;
    vector<int> p;
    for (int i = 0; i < n; i++)
    {
        cin>>tem;
        p.push_back(tem);
    }
    for (int i = 1; i < n-1; i++)
    {
        if((p[i]>p[i-1] && p[i]<p[i+1])||(p[i]<p[i-1] && p[i]>p[i+1])){
            cont++;
        }
    }
    
    cout<<cont;
    return 0;
}