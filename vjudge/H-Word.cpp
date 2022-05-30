#include<bits/stdc++.h>
using namespace::std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    string input;
    int upper=0, lower=0;
    cin>>input;

    for (int i = 0; i < input.length(); i++)
    {
        if(isupper(input[i])){
           upper++; 
        }
        else{
            lower++;
        }
    }
    if(lower>=upper){
        for (int i = 0; i < input.length(); i++)
        {
            input[i]=tolower(input[i]);
        }
    }
    else{
        for (int i = 0; i < input.length(); i++)
        {
            input[i]=toupper(input[i]);
        }
    }
    cout<<input;
    return 0;
}