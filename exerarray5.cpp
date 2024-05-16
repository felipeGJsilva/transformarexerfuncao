#include <iostream>
#include <string>

using namespace std;

int exercicio() {
       int array[10];


    for (int i = 0; i < 10; i++) {
        cout << "Digite o numero " << i << ": ";
        cin >> array[i];
    }

   
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " \n";
    }

    cout << endl;

    return 0 ;
}

int main() {
    
    int exer = exercicio();

    return 0;
}