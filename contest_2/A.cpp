#include<bits/stdc++.h>
using namespace::std;

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);
    string input;
    int cont=0;
    int space=0;
    char tem;
    while (getline(cin,input) && input!="*")
    {
        tem=input[0];
        for (int i = 0; i < input.length(); i++)
        {   
            if(input[i]==' '){
                space++;
                if(toupper(input[i+1])==toupper(tem)){
                    cont++;
                }
            }
        }
        if(cont==space){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
        cont=0;
        space=0;
    }
    

    return 0;
}