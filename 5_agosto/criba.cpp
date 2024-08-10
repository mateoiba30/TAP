#include <iostream>
#include <vector>
#include <cmath>

int main(){
    std::vector<bool> esPrimo(n + 1, true);
    esPrimo[0] = esPrimo[1] = false;

    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (esPrimo[i]) {
            for (int j = i * i; j <= n; j += i) {
                esPrimo[j] = false;
            }
        }
    }
    return 0;
}