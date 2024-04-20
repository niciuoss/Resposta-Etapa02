#include <iostream>
#include <string>

void fibonacci(int n) {
    int n1 = 0, n2 = 1, n3;
    bool aux = false;

    std::cout << "Essa é a sequencia de Fibonacci ate o número " << n << ": ";
    std::cout << n1 << " " << n2 << " ";

    while (true) {
        n3 = n1 + n2;
        if (n3 <= n) {
            std::cout << n3 << " ";
            if (n3 == n) {
                aux = true;
            }
            n1 = n2;
            n2 = n3;
        } else {
            break;
        }
    }

    std::cout << std::endl;

    if (aux) {
        std::cout << n << " pertence a Fibonacci." << std::endl;
    } else {
        std::cout << n << " nao pertence a Fibonacci." << std::endl;
    }
}

int main() {
    int numero;

    std::cout << "Digite um numero: ";
    std::cin >> numero;

    fibonacci(numero);

    return 0;
}
