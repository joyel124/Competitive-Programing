#include<bits/stdc++.h>
using namespace::std;

int main(){
    
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    int T;
    cin>>T;
    
    while (T--)
    {
        long long N,X=0,Y=0;
        cin>>N;
        
        for (int i = 0; i < 4*N-1; i++)
        {
            long long x,y;
            cin>>x>>y;
            X=X^x;//X^=x
            Y=Y^y;//Y^=y
        }
        cout<<X<<" "<<Y<<endl;
    }
    return 0;

}