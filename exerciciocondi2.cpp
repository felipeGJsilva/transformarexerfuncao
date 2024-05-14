#include <iostream>
#include <string>

using namespace std;


 int exercicio(){
   int num;

    printf("Digite um número:   ");
    scanf("%d", &num);

    if(num > 0){
        printf("O número digitado é positivo.\n");
    }
    else{
        printf("O número digitado é negativo \n ");
    }
    return 0;
}

int main() {
    
    int exer = exercicio();

    return 0;
}