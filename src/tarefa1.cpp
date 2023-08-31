#include <iostream>
#include "searchElement.h"

int main(int argc, char* argv[]) {
    
    const char* geometrics[] = {
        "triangulo", "retangulo", "quadrado", "circulo",
        "piramide", "cubo", "paralelepipedo", "esfera"
    };

    int result = searchElement(geometrics, 8, argv[1]);

    if (result != -1) {
        std::cout << "Geometric found: " << result << std::endl;
    } else {
        std::cout << "Geometric not found" << std::endl;
    }

    return 0;
}
