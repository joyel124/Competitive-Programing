#include<bits/stdc++.h>
using namespace::std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int N,B;
    while (cin>>N>>B)
    {
        vector<bool> arr;
        vector<int> input;
        int num;
        bool tem;
        int cont=0;
        if(N==0 && B==0){
            break;
        }
        else{
            for (int i = 0; i <= N; i++)
            {
                tem=false;
                arr.push_back(tem);
            }
            for (int i = 0; i < B; i++)
            {
                cin>>num;
                input.push_back(num);
            }
            for (int i = 0; i <= N; i++)
            {
                for(int j=0;j<B;j++){
                    if(input[j]==i){
                        arr[i]=true;
                        break;
                    }
                }
            }
            for(int i=0;i<B-1;i++){
                for(int j=i+1;j<B;j++){
                    for (int n = 0; n <= N; n++)
                    {
                        if(abs(input[i]-input[j])==n){
                            arr[n]=true;
                            break;
                        }
                    }
                }
            }
            for (int i = 0; i <= N; i++)
            {
                if(arr[i]==true){
                    cont++;
                }
            }
            if(cont==N+1){
                cout<<"Y"<<endl;
            }
            else{
                cout<<"N"<<endl;
            }
        }
    }
    

    return 0;
}