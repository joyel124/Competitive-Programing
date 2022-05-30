#include<bits/stdc++.h>
using namespace::std;

int main(){
    
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int input[100000];
    long long T,N;
    cin>>T;
    while (T--)
    {   
        int cont=0;
        cin>>N;
        //cout<<N<<"---"<<endl;
        for (int i = 0; i < N; i++)
        {
            cin>>input[i];
        }
        

        cout<<(N*(N-1))/2<<endl;;
        
    }
    

    return 0;
}