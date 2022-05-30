#include<bits/stdc++.h>
using namespace::std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    string input;
    int cont=0;

    cin>>input;

    for (int i = 0; i < input.length()/2; i++)
    {
        if(input[i]!=input[input.length()-1-i]){
           cont++; 
        }
    }
    cout<<cont;
}