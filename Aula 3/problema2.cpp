#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> matriculasUnicas;
    int matricula;

    while(cin >> matricula)
        matriculasUnicas.insert(matricula);
    
    cout << "\nTotal de alunos distintos: " << matriculasUnicas.size() << endl;

    return 0;
}