#include<bits/stdc++.h>
using namespace::std;

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);
    long long n, ans=0, cont=0;
	cin>>n;
	vector<int> input;
	for (int i = 0; i < n; i++)
	{
		int tem;
		cin>>tem;
		input.push_back(tem);
		if(input[i]!=0){
			cont++;
		}
		else{
			ans=max(cont,ans);
			cont=0;
		}
	}
	cout<<max(cont,ans)<<endl;
    return 0;
}