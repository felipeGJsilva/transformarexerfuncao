#include <iostream>
#include <string>

using namespace std;


 int exercicio(){
 int num;

    printf("Digite o número: ");
    scanf("%d", &num);

    

    if(num %3 == 0 && num %5 == 0){
        printf(" O número é multiplo de 3 e 5 \n");
    }
    else{
        printf(" O número não é multiplo de 3 e 5 \n");
    }
    
    return 0;
}

int main() {
    
    int exer = exercicio();

    return 0;
}