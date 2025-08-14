#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vetor = {3, 6, 2, 14, 5, 6, 7}; 

    // Usando acesso ao índice
    cout << "Segunda forma de iteração sobre o vetor: ";
    for(int i=0;i<vetor.size();i++){

        cout << vetor[i] << " ";

    }
    cout << endl;
    
    // Usando auto
    cout << "Primeira forma de iteração sobre o vetor: ";
    for(auto x: vetor){

        cout << x << " ";

    }
    cout << endl;
    
    // Usando iteradores
    vector<int>::iterator it;
    cout << "Terceira forma de iteração sobre o vetor: ";
    for(it=vetor.begin();it!=vetor.end();it++){

        cout << *it << " ";

    }
    cout << endl;



    return 0;

}