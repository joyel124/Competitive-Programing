#include<bits/stdc++.h>
using namespace::std;

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);
    long long N, T;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        cin>>N;
        string number;
        cin>>number;
        long long cont=0;
        for (int j = 0; j < N; j++)
        {
            if(number[j]=='1'){
                cont++;
            }
        }
        cout<<(cont*(cont+1))/2<<endl;
    }
    
    return 0;
}