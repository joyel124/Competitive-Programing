#include<bits/stdc++.h>
using namespace::std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int count=0;
    string input;

    cin>>input;

    for (int i = 0; i < input.length(); i++)
    {
        bool a=false;
        for (int j = 0; j < i; j++)
        {
            if(input[j]==input[i]){
                a=true;
                break;
            }
        }
        if(a==false){
            count++;
        }
    }

    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}