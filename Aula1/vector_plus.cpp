#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vetor = {3, 6, 2, 14, 5, 6, 7}; 

    cout << "Vetor original: ";
    for(auto x: vetor)cout << x << " ";
    cout << "\n";
    cout << "Tamanho do vetor: " << vetor.size() << endl;
    cout << "Vetor está vazio? : " << vetor.empty() << endl;
    

    //ERASE()
    vetor.erase(vetor.begin(), vetor.end()-4); // Apaga todos os elementos exceto os 4 últimos
    cout << "\nVetor : ";
    for(auto x: vetor)cout << x << " ";
    cout << "\n";
    // Tamanho do vetor depois do erase
    cout << "Tamanho do vetor: " << vetor.size() << endl;
    cout << "Vetor está vazio? : " << vetor.empty() << endl;
    

    // CLEAR()

    vetor.clear(); // Apaga todos os elementos do vetor
    cout << "\nVetor : ";
    for(auto x: vetor)cout << x << " ";
    cout << "\n";
    // Tamanho do vetor depois do clear
    cout << "Tamanho do vetor: " << vetor.size() << endl;
    cout << "Vetor está vazio? : " << vetor.empty() << endl;
    
    return 0;

}