#include <iostream>
#include <string>

using namespace std;

int exercicio() {
       
    string arr[] = {"a","b","c","d","e","f"};
    int i = 0;
    while(i < 6){

        cout << arr[i] << " ";
        i++;
    }

    cout << endl;

    return 0 ;
}

int main() {
    
    int exer = exercicio();

    return 0;
}