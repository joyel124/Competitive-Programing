#include<bits/stdc++.h>
using namespace::std;

int main(){

    
    int n;
    cin>>n;
    string input;
    cin>>input;
    for (int i = 0; i < input.length(); i++)
    {
        if(input[i]+n>'Z'){
             input[i]=(input[i]+n)%'Z'+'A'-1;
        }
        else{
            input[i]=input[i]+n;
        }
    }
    
    cout<<input;
    return 0;
}