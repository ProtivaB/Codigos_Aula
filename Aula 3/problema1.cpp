#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> contagemVotos;
    string nomeCandidato;

    while(cin >> nomeCandidato)
        contagemVotos[nomeCandidato]++;
    
    for(auto par : contagemVotos){
        cout << par.first << ": " << par.second << " voto(s)\n";
    }

    return 0;
}