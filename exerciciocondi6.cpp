#include <iostream>
#include <string>

using namespace std;


 int exercicio(){
   int ano;
    
    printf("Digite o número: ");
    scanf("%d",&ano);

    if  ((ano %4 == 0) && (ano % 100 != 0) || (ano % 100 == 0) && (ano % 400 == 0)){
        printf("Ano bissexto \n");
    }
    else{
        printf("Não é bissexto \n");
    }
    return 0;
}

int main() {
    
    int exer = exercicio();

    return 0;
}