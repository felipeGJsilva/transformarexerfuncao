#include <iostream>
#include <string>

using namespace std;

int exercicio() {
       float arr[8] = {1,10,20,30,40,50,60,70};
    int i = 0;
    while(i < 8){
        if( arr[i] > 5 ){
            cout << arr[i] << " ";
       }
       else{

       }
       i++;
    }

    cout << endl;

    return 0 ;
}

int main() {
    
    int exer = exercicio();

    return 0;
}