#include <iostream>
#include <string>

using namespace std;


 int exercicio(){
  int lead ;

    printf("Digite a quantidade de leads: ");
    scanf("%d", &lead);

    if ( lead >=6 && lead <= 10 ){
        printf(" Quantidade esperada \n");
    }

    else if(lead <=5 ){
        printf(" Quantidade baixa \n");
    }
    else if(lead >=11){
        printf(" Quantidade Alta \n");
    }
    return 0;
}

int main() {
    
    int exer = exercicio();

    return 0;
}