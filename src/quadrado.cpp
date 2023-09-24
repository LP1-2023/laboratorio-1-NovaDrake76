#include <iostream>
#include "quadrado.h"

void quadrado(int side)
{
    std::cout << "Area do quadrado: " << (side * side) << std::endl;
    std::cout << "Perimetro do quadrado: " << (4 * side) << std::endl;
}
