#include<bits/stdc++.h>
using namespace::std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    string input;
    //otra forma mas facil es ordenarlo SORT y validar q todos sean diferentes
    do
    {
       cin>>input;
    } while (!(input.length()==4));
    
    if(((input[0]==input[2] && input[1]==input[3])||(input[0]==input[1] && input[2]==input[3])||(input[0]==input[3] && input[1]==input[2]))){
        if(input[0]==input[1] && input[1]==input[2] && input[2]==input[3]){
            cout<<"No";
        }
        else{
            cout<<"Yes";
        }
    }
    else{
        cout<<"No";
    }
    return 0;
    
}