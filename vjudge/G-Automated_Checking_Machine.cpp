#include<bits/stdc++.h>
using namespace::std;

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int t, cont=0;
    int tem;
    //freopen("test.txt","r",stdin);
    int con1[5];
    int con2[5];
    while (cin>>t){
        con1[0]=t;
        //cout<<con1[0]<<" ";
        for (int j = 1; j < 5; j++)
        {
            cin>>con1[j];
            //cout<<con1[j]<<" ";
        }
        //cout<<endl;
        for (int i = 0; i < 5; i++)
        {
            cin>>con2[i];
            //cout<<con2[i]<<" ";
            //cout<<con1[i]<<"+"<<con2[i]<<": ";
            if(con1[i]+con2[i]==1){
                cont++;
               // cout<<"1";
            }
            //cout<<endl;
        }
        //cout<<endl;
        if(cont==5){
            cout<<"Y\n";
        }
        else{
            cout<<"N\n";
        }
        cont=0;
     }
    return 0;
}