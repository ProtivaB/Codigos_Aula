#include <bits/stdc++.h>
using namespace std;

int main(){
    //Declaração de um multiset de inteiros
    multiset<int> ms;

    ms.insert(10);
    ms.insert(30);
    ms.insert(20);
    ms.insert(10); // Inserindo um elemento duplicado

    for(int elemento : ms){
        cout << elemento << " "; // Saída: 10 10 20 30
    }
    cout << endl;

    // Contando ocorrências do número 10
    cout << "O número 10 aparece " << ms.count(10) << " vezes." << endl;

    return 0;
}
