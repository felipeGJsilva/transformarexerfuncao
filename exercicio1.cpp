#include <iostream>
#include <string>

using namespace std;

int exercicio1() {
    string nome ;
    
    cout << "Digite seu nome: " ;
    cin>>nome;
    cout<< "nome: "<< nome<< endl;
    return 0;
}

int main() {
    
    int aparecerv = exercicio1();
    return 0;
}