#include<bits/stdc++.h>
using namespace::std;

stack<char> reverse(stack<char>& s){
    stack<char> tem;
    while (!s.empty())
    {
        tem.push(s.top());
        s.pop();
    }
    return tem;
}

int main(){
    
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    string input;
    cin>>input;
    stack<char> s;
    for (int i = 0; i < input.length(); i++)
    {
        if(s.empty()){
            s.push(input[i]);
        }
        else{
            if(input[i]==s.top()){
                s.pop();
            }
            else{
                s.push(input[i]);
            }
        }
    }
    s=reverse(s);
    while (!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    return 0;
}