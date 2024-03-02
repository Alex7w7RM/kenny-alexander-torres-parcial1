#include <iostream>

using namespace std;
int resultado , res1;
int main() {


    cout << " numeros pares 0 al 50" << endl;
    for (int i = 50; i >= 1 ; i--) {
        if (i % 2 == 0){
            cout << i<< endl;
            resultado += i;

        }

    }

    cout << "rsultado de la suma de numeros pares "<< resultado << endl;

    cout << " numeros impares 0 al 50" << endl;
    for (int a = 50; a >= 0 ; a--) {
        if (a % 3 == 0){
            cout << a<< endl;
            res1 += a;

        }

    }

    cout << "rsultado de la suma de numeros impares "<< res1 << endl;



    return 0;
}
