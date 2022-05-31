#include<bits/stdc++.h>
using namespace::std;

int main(){
    map<string, string> servers;//map<ip, name> -->IP UNICO IDENTIFICADOR, NAME SE PUEDE REPETIR
    vector<pair<string, string>> commands;//map<commands, ip> -->COMMANDS UNICO IDENTIFICADOR, IP SE PUEDE REPETIR
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    int N, M;
    string ip, name;
    string command;
    cin>>N>>M;
    for (int i = 0; i < N; i++)//# servers//name and ip
    {
        cin>>name;
        cin>>ip;
        servers.insert({ip,name});
    }
    for (int i = 0; i < M; i++)//# commands//command and ip
    {
        cin>>command;
        cin>>ip;
        commands.push_back({command,ip});
    }

    for (auto itr: commands)//# commands//command and ip
    {
        cout<<itr.first<<" "<<itr.second<<" #"<<servers.find(itr.second.erase(itr.second.size()-1))->second<<endl;
    }

    return 0;

}