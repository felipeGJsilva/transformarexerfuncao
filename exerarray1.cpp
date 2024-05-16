#include <iostream>
#include <string>

using namespace std;

int exercicio() {
       int arr[] = {1,2,3,4,5};

    for (int i = 0; i <5; ++i){

        cout << arr[i] << " ";
    }

    cout << endl;

    return 0 ;
}

int main() {
    
    int exer = exercicio();

    return 0;
}