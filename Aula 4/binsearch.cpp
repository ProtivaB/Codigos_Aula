#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {3, 5, 8, 13, 18, 19, 21, 27, 32};
    int x = 13;

    int l = 0; //inicio
    int r = a.size() - 1; //fim
    int ans = -1; //se nao encotrar, fica -1

    while(l <= r){
        int m = (l+r)/ 2;

        if(a[m] == x){ //elemento encontrado
            ans = m;
            break;
        }else if(a[m] < x){ // a[m] < x
            //o meio eh menor que x, entao x esta na metade esquerda.
            l = m + 1;
        }else{ // a[m] > x
            //o meio eh maior que x, entao x esta na metade direita.
            r = m - 1;
        }
    }

    if(ans != -1){
        cout << "Elemento " << x << " encontrado na posicao " << ans << endl;
    } else {
        cout << "Elemento " << x << " nao encontrado" << endl;
    }

    return 0;
}