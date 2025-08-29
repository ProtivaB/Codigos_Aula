#include "bits/stdc++.h"
using namespace std;

int main(){
    // Declaração de um map
    map<int, string> m;
    m[1] = "um"; //Inserção no map
    m[2] = "dois";
    m[3] = "três";
    
    
    for(auto it : m){
        cout << it.first << " -> " << it.second << "\n";
        //Saída:
        /*
        1 -> um
        2 -> dois
        3 -> três
        */
    }

    // A função count() verifica se uma chave existe
    //Em um 'map', como as chaves são únicas, o resultado será sempre 1 (se existe) ou 0 (se não existe)
    if(m.count(2)){
        cout << "Resultado: A chave 2 foi encontrada no map.\n";
    } else {
        cout << "Resultado: A chave 2 NAO foi encontrada no map.\n";
    }

    if(m.count(5)){
        cout << "Resultado: A chave 5 foi encontrada no map.\n";
    } else {
        cout << "Resultado: A chave 5 NAO foi encontrada no map.\n";
    }

    for(auto i = m.begin(); i != m.end(); i++)
        cout << i->first << " : " << i->second << '\n';

    return 0;
}

