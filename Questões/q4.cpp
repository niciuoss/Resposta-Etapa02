#include <iostream>
#include <string>

void inverte(std::string & str) {
    int size = str.length();
    
    for (int i = 0; i < size/2; i++) {
        char aux = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = aux;
    }
}

int main() {
    std::string palavra;
    
    std::cout << "Escreva a seguir a palavra que deseja inverter: ";
    std::getline(std::cin, palavra);
    
    inverte(palavra);
  
    std::cout << "Sua palavra invertida: " << palavra << std::endl;
    
    return 0;
}
