#include<bits/stdc++.h>
using namespace::std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int n;
    cin>>n;
    string word;
    string tem;
    bool find=false;
    cin.get();
    for (int i = 0; i < n; i++)
    {
        
        getline(cin,tem);
        istringstream ciin(tem);
        while(ciin >> word){
            //cout<<word<<endl;
            if(word=="not"){
                find=true;
                break;
            }
        }
        if(find==true){
            cout<<"Real Fancy"<<endl;
        }
        else{
            cout<<"regularly fancy"<<endl;
        }
        find=false;
    }
    return 0;
}