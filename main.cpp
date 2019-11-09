#include <iostream>
#include <cmath>
#include "quaternion.hpp"

int main() {
    quaternion q1{}, q2{};
    std::cin >> q1 >> q2;
    std::cout << "q1:\n" << q1 << "q2:\n" << q2;
    std::cout << "q1 + q2:\n" << q1 + q2;
    std::cout << "q1 - q2\n" << q1 - q2;
    std::cout << "q1 * q2\n" << q1 * q2;
    std::cout << "q1 / q2 \n" << q1 / q2;
    quaternion a = 2.4_i;
    std::cout << a << std::endl;
    quaternion b = 3.9_j;
    std::cout << b << std::endl;
    quaternion c = 4.9_k;
    std::cout << c << std::endl;
    return 0;
}