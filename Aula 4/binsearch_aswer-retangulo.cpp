#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a, b;

bool check(ll x){
    if (x < max(a, b)) return false; //tamanho insuficiente 
    return (x / a) * (x / b) >= n;
}

int main(){
    cin >> n >> a >> b;

    ll l = 0; //l sempre aponta para uma resposta RUIM (lado 0)
    ll r = 1e10; //r aponta para uma resposta BOA (um lado grande o suficiente)
    ll ans = r;

    while(l + 1 < r){
        ll m = l + (r - l) / 2;
        if(check(m)){//m eh uma resposta BOA. Tentamos encontrar uma ainda menor
//o melhor "bom" até agora pode ser m, entao guardamos e movemos ponteiro de bom para m
            r = m; 
        }else{//m eh uma resposta RUIM. A resposta deve ser maior.
            // Movemos nosso ponteiro de 'ruim' para 'm'.
            l = m;
        }
    }

    cout << r << endl; //resposta eh o primeiro BOM

    return 0;
}