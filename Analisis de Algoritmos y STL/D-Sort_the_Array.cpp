#include<bits/stdc++.h>
using namespace::std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int l=0, r=0;
    int n;
    cin>>n;

    vector<int> input(n);

    for (int i = 0; i < n; i++)
    {
        cin>>input[i];
    }
    for (int i = 0; i < n-1; i++)//n-1, xq va comparar con el siguiente input[i+1]
    {
        if(input[i]>input[i+1]){
            r=i+1;
        }
        if(input[(n-1)-(i+1)]>input[(n-1)-i]){
            l=(n-1)-(i+1);
        }
    }
    reverse(input.begin()+l, input.begin()+r+1);//invertimos en segmento
    for (int i = 0; i < n-1; i++)
    {
        if(input[i]>input[i+1]){
            cout<<"no"<<endl;
            return 0;
        }
    }

    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;

    return 0;
}