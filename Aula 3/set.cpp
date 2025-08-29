#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
    s.insert(5); //adiciona no vetor
    s.insert(2);
    s.insert(8);
    s.insert(1);
    
    auto b = s.find(5); //procura o elemento 5
    cout << *b << endl; //saída: 5
    if(b != s.end())
        cout << "Elemento 5 encontrado" << endl;

    s.erase(5); //remove o elemento 5
    for(auto it : s){
        cout << it << " "; //saída: 1 2 5 8
    }

    return 0;
}