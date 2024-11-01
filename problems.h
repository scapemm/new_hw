#include <cmath>

int floorFunction(double num) {
    return static_cast<int>(std::floor(num));
}

int ceilingFunction(double num) {
    return static_cast<int>(std::ceil(num));
}

void swap_values(double &a, double &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
