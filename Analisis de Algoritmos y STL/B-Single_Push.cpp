#include<bits/stdc++.h>
using namespace::std;

int main(){
    
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int T;
    long long N;
    cin>>T;    
    while (T--)
    {
        cin>>N;
        bool f=true;
        int arr1[100000];
        int arr2[100000];
        for (int i = 0; i < N; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin>>arr2[i];
        }
        int m=-1;
        int k=0;
        for (int i = 0; i < N; i++)
        {
            if(arr1[i]!=arr2[i]){
                if(arr2[i]<arr1[i]){
                    f=false;
                    break;
                }
                k=arr2[i]-arr1[i];
                m=i;
                break;
            }
        }
        for(int i = m; i < N; i++)
        {
            if(arr1[i] == arr2[i]) break;
            arr1[i] += k;
        }

        for(int i = 0; i < N; i++)
        {
            if(arr1[i] != arr2[i]){
                f = false;
                break;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    


    return 0;
}