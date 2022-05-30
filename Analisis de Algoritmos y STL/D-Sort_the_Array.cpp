#include<bits/stdc++.h>
using namespace::std;

long long strangeCounter(long long t){
    long n=3;
    while (2*n-2<=t)
    {
        n*=2;
    }
    return n-(t-(n-2));
}
int main(){
    
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    long long T;
    cin>>T;
    cout<<strangeCounter(T)<<endl;


    return 0;
}