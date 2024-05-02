#include <iostream>
#include <string>

using namespace std;


int exercicio5(){

    
   char frase[1000];

    std:: cout << "Digite a frase: ";
    std::cin.getline(frase,1000);
    std::cout << " "<< frase<<std::endl;
    

    return false;
}

int main() {
    
    int exer = exercicio5();

    return 0;
}