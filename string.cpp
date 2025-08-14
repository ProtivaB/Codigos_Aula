#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a = "Hello";
    string b = "World";

    cout << "a + b = "<< a + b << endl;

    a+=b;

    cout << a << endl;
    
    a.append("!");
    
    cout << a << endl;
    cout << "Tamanho de 'a': " << a.size() << endl;
    cout << "Tamanho de 'a': " << a.length() << endl; // Mesma coisa que a.size()

    
    for(auto l: a){
        cout << l << " ";
    }
    cout << endl;
    

    cout << "Primeira ocorrência de 'Wo': " << a.find_first_of("World") << endl;


    return 0;

}