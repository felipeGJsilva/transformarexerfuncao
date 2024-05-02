#include <iostream>
#include <string>

using namespace std;


 int exercicio1(){
    int num;

    printf("Digite um número:   ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O número que foi digitado é par \n");
    }
    else{
        printf("O número que foi digitado não é par \n");
    }
    return 0;
}

int main() {
    
    int exer = exercicio1();

    return 0;
}