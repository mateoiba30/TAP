#include <iostream>
#include <cmath>

using namespace std;

int sumaDivisores(int n);

int main() {
    int i;
    cin >> i;
    int n;
    for (int j = 0; j < i; j++) {
        
        cin >> n;
        int suma = sumaDivisores(n);
        cout << n;

        if (suma == n) {
            cout << " perfecto";
        } else {
            int sumaDivSuma = sumaDivisores(suma);
            if (n == sumaDivSuma) {
                cout << " romantico";
            }
            if (n < suma) {
                cout << " abundante";
            } 
            if (n != sumaDivSuma && n >= suma) {
                cout << " complicado";
            }
        }
        cout << "\n";
    }
    return 0;
}

int sumaDivisores(int n) {
    if (n == 1) return 0; // El número 1 no tiene divisores propios

    int suma = 0; // Iniciamos en 0, ya que 1 siempre es un divisor propio
    int raiz = sqrt(n);

    for (int i = 1; i <= raiz; i++) {
        if (n % i == 0) {
            if (i != n) suma += i; // Añadimos i si no es el número mismo
            if (i != 1 && i != n / i && n / i != n) suma += n / i; // Añadimos n / i si no es el número mismo ni el divisor ya añadido
        }
    }

    return suma;
}