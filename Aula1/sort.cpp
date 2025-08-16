#include <bits/stdc++.h>

using namespace std;

bool ordem_decrescente(int a, int b){
    return a > b;
}

bool primeiro(pair<int,int> a, pair<int,int> b){
    return a.first < b.first;
}

bool segundo(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}


int main(){

    cin.tie(nullptr);

    vector<int> vetor= {1, 5, 2, 6, 8, 22, 4, 2, 11, 50, 100, 21, 33, 22};

    sort(vetor.begin(),vetor.end());
    for(auto x:vetor) cout << x << " ";
    cout << endl;
    
    sort(vetor.begin(),vetor.end(), ordem_decrescente);
    for(auto x:vetor) cout << x << " ";
    cout << endl;

    sort(vetor.rbegin(),vetor.rend());
    for(auto x:vetor) cout << x << " ";
    cout << endl;



    vector<pair<int,int>> pares = {
        {1,2},
        {24,1},
        {11,5},
        {98,68},
        {112,0},
        {13,-1},
        {5,27},
        {68,54},
        {19,2},
        {-9,101}
    };


    cout << "Ordem crescente primeiro elemento: "<< endl;
    sort(pares.begin(),pares.end(),primeiro);
    for(auto p: pares){
        printf("\n{%d, %d}", p.first, p.second);
    }
    cout << endl;

    cout << "Ordem crescente segundo elemento: "<< endl;
    sort(pares.begin(),pares.end(),segundo);
    for(auto p: pares){
        printf("\n{%d, %d}", p.first, p.second);
    }
    cout << endl;


    return 0;

}