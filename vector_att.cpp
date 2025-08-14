#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vetor; // Declaramos um vetor (inicialmente vazio);
 
    for(int i=0;i<=10;i++){

        vetor.push_back(i); // Adiciona o valor 'i' ao final do vector

    }

    cout << "Primeira atribuição no vetor: ";
    for(auto x: vetor) cout << x << " ";
    cout << endl;
    
    for(int i=10;i>=0;i--){
        
        vetor[10-i] = i; // Adiciona o valor 'i' a posição 'i' do vector
        
    }
    
    
    cout << "Segunda atribuição no vetor: ";
    for(auto x: vetor) cout << x << " ";
    cout << endl;

    return 0;

}