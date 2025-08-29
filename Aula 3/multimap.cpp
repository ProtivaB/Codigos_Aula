#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declaração de um multimap
    multimap<std::string, std::string> agenda;

    agenda.insert({"Maria", "9999-1111"});
    agenda.insert({"Joao", "9888-2222"});
    agenda.insert({"Maria", "9777-3333"}); // Mesma chave "Maria" com outro valor


    for(auto& par : agenda){
        cout << par.first << ": " << par.second << endl;
        // Saída:
        /*
            Joao: 9888-2222
            Maria: 9999-1111
            Maria: 9777-3333
        */
    }

    return 0;
}