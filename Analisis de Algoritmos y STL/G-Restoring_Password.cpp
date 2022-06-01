#include<bits/stdc++.h>
using namespace::std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    string arr[10];
    string info;

    cin>>info;

    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 8; i++)
    {
        string tem=info.substr(i*10,10);
        for (int j = 0; j < 10; j++)
        {
            if(tem==arr[j]){
                cout<<j;
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}