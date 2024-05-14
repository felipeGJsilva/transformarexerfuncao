#include <iostream>
#include <string>

using namespace std;


 int exercicio(){
 
    
    float saldo = 100000;
    float saque ;

    printf("Digite o valor para ser retirado: ");
    scanf("%f",&saque);

    if (saldo >= saque){
        printf(" você poode retirar \n");
    }
    else if (saldo < saque){
        printf(" Você não pode retirar pois não possui saldo suficiente \n ");
    }
    return 0;
}

int main() {
    
    int exer = exercicio();

    return 0;
}