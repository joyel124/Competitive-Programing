#include<bits/stdc++.h>
using namespace::std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    vector<int> ant;
    bool t=true;
    int k;
    int tem;
    for(short x=0;x<5;x++){
        cin>>tem;
        ant.push_back(tem);
    }   
    cin>>k;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(abs(ant[j]-ant[i])>k && t!=false){
                t=false;
                cout<<":(";
            }
        }
    }
    if(t==true){
        cout<<"Yay!";
    }
}