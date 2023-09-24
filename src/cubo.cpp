#include <iostream>
#include "cubo.h"

void cubo(int side)
{
    std::cout << "Area do cubo: " << (6 * side * side) << std::endl;
    std::cout << "Volume do cubo: " << (side * side * side) << std::endl;
}
