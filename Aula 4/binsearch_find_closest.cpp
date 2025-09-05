#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {3, 5, 10, 11, 13, 18, 25, 27, 31};
    int x = 20;

    int l = -1; //a[l] <= x (com -infinito imaginário)
    int r = a.size(); //a[r] > x (com +infinito imaginário)

    while(l + 1 < r){
        int m = l + (r - l) / 2;
        if(a[m] <= x){
            l = m; //m eh um candidato valido para o limite esquerdo
        }else{
            r = m; //m eh um candidato valido para o limite direito
        }
    }

    //l eh o indice do maior elemento <= x
    //r eh o indice do menor elemento > x

    cout << "O maior elemento menor ou igual a " << x << " eh: ";
    if(l == -1){
        cout << "Todos sao maiores" << endl;
    }else{
        cout << a[l] << " na posicao " << l << endl;
    }

    cout << "O menor elemento maior que " << x << " eh: ";
    if(r == a.size()){
        cout << "Todos sao menores" << endl;
    }else{
        cout << a[r] << " na posicao " << r << endl;
    }

    if(l == -1){
        cout << "O mais proximo eh " << a[r] << endl;
    }else if(r == a.size()){
        cout << "O mais proximo eh " << a[l] << endl;
    }else{
        if(abs(x - a[l]) <= abs(x - a[r])){
            cout << "O mais proximo eh " << a[l] << endl;
        }else{
            cout << "O mais proximo eh " << a[r] << endl;
        }
    }

    return 0;
}