#include <iostream>
#include <string>

using namespace std;


int exercicio6(){

    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};

   std::cout << "Números pares:\n";
    if (numeros[0] % 2 == 0) 
        std::cout << numeros[0] << "\n"; 
    if (numeros[1] % 2 == 0) 
        std::cout << numeros[1] << "\n"; 
    if (numeros[3] % 2 == 0)
        std::cout << numeros[3] << "\n"; 
    if (numeros[5] % 2 == 0) 
        std::cout << numeros[5] << "\n"; 
    if (numeros[7] % 2 == 0) 
        std::cout << numeros[7] << "\n"; 
    if (numeros[9] % 2 == 0) 
        std::cout << numeros[9] << "\n"; 

    cout << "" << numeros[0];

    return false;
}

int main() {
    
    int exer = exercicio6();

    return 0;
}