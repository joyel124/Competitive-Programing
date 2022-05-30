//source: https://acm.timus.ru/problem.aspx?space=1&num=1005

#include<bits/stdc++.h>
using namespace::std;

int main()
{
    int N;
    int W[20];
    int t = 0;
    int r = 1 << 30;

    cin >> N;

    for(int i = 0; i < N; i++) cin >> W[i];

    for(int i = 0; i < (1<<N); i++)
    {
        for(int j = 0; j < N; j++)
            t += ((1<<j)&i)?W[j]:-W[j];
        r = min(r,abs(t));
        t = 0;
    }

    cout << r;

    return 0;
}