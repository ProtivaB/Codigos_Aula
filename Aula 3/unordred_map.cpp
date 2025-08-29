#include <bits/stdc++.h>
using namespace std;

int main() {
    //Declaração de um unordered_map
    unordered_map<string, int> contador_palavras;

    
    contador_palavras["gato"] = 1;
    contador_palavras["cachorro"] = 2;
    contador_palavras["gato"]++; //Incrementa o valor associado à chave "gato"

    cout << "Contagem de palavras:" << endl;
    for(auto par : contador_palavras){
        cout << par.first << ": " << par.second << endl;
    }

    return 0;
}
