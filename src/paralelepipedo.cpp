#include <iostream>
#include "paralelepipedo.h"

void paralelepipedo(int aresta1, int aresta2, int aresta3)
{
    std::cout << "Area do paralelepipedo: " << (2 * (aresta1 * aresta2 + aresta1 * aresta3 + aresta2 * aresta3)) << std::endl;
    std::cout << "Volume do paralelepipedo: " << (aresta1 * aresta2 * aresta3) << std::endl;
}
