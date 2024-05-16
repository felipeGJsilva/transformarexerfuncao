#include <iostream>
#include <string>

using namespace std;

int exercicio() {
       
    int arr[] = {1,2,3,4,5,6,7};

    for (int i = 0; i <7; ++i){

       if( arr[i] % 2 == 0){
            cout << arr[i] << " ";
       }
       else{

       }
    }

    return 0 ;
}

int main() {
    
    int exer = exercicio();

    return 0;
}