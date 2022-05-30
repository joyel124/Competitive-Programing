#include<bits/stdc++.h>
using namespace::std;

int main(){
    int n;
    cin>>n;
    string m;
    vector<pair<string,int>> input;
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        input.push_back(std::make_pair(m,0));
    }
    for (int i = n-1; i >0; i--)
    {
        for (int j = i-1; j >= 0; j--)
        {
            if(input[i].first==input[j].first){
                input[i].second++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(input[i].second==0){
            cout<<"OK"<<endl;
        }
        else{
            cout<<input[i].first+to_string(input[i].second)<<endl;
        }
    }
}