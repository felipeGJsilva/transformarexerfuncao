#include <iostream>
#include <string>

using namespace std;


 int exercicio(){
 
    float altura ;
    float peso ;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    float imc = (peso / (altura * altura));

    if (imc < 18.5){
        printf("Seu IMC é: %.4f \n",imc);
        printf("Categoria: Abaixo do peso \n");
    }
    else if( imc >= 18.5 && imc < 25){
        printf("Seu IMC é: %.4f \n",imc);
        printf("Categoria: Normal\n");

    }
        else if( imc <= 25 && imc < 30){
        printf("Seu IMC é: %.4f \n",imc);
        printf("Categoria: sobrepeso \n");

    }
        else if( imc <= 30){
        printf("Seu IMC é: %.4f \n",imc);
        printf("Categoria: Obeso \n");

    }
    return 0;
}

int main() {
    
    int exer = exercicio();

    return 0;
}