#include<bits/stdc++.h>
using namespace::std;

void staircase(int n){
    for (int i = 0; i < n; i++)
    {
        for (int z = i; z <n-1 ; z++)
        {
            cout<<" ";
        }
        for (int j = 0; j <i+1 ; j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int n;
    cin>>n;
    staircase(n);
    return 0;
}