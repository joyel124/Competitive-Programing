#include<bits/stdc++.h>
using namespace::std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int n;
    cin>>n;
    string m;
    map<string,int> input;//map<identificador(input), contador>
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        if(input[m]==0){
            cout<<"OK"<<endl;
            input[m]++;
        }
        else{//si ya existe ese string
            cout<<m<<input[m]<<endl;
            input[m]++;
        }
    }
    return 0;
}