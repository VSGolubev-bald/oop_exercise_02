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
    return 0;
}