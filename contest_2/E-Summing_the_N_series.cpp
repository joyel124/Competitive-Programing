#include<bits/stdc++.h>
using namespace::std;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    long long int t, n, res;
    cin >> t;
    while(t--){
        cin >> n;
        n %= 1000000007;
        res = n*n % 1000000007;
        cout << res << endl;
    }
    return 0;
}