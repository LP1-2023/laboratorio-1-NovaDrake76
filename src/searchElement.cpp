#include "searchElement.h"
#include <iostream>
#include <cstring>

int searchElement(const char* arr[], int size, const char* target) {
    for (int i = 0; i < size; ++i) {
        if (strcmp(arr[i], target) == 0) {
            return i;
        }
    }
    return -1;
}
