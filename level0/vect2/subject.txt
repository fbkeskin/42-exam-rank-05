Assignement name: vect2
Expected files: vect2.cpp, vect2.hpp
-------------------------------------------------------------------------------------------

Create a class vect2 representing a mathematical vector of dimension 2 containing ints.

It must support addition, substraction and multiplication by a scalar (such as the expression (vect2(2,2) * 2 == vect2(4,4)) is true).

the operator [] can be used to access the component of your vector (with 0 and 1), no bound checking is required.

Your function must be printable with the << operator such as:
        std::cout << v << std::endl;
produce the same output as:
        std::cout << "{" << v[0] << ", " << v[1] << "}" << std::endl;

You will find a main in this directory that must work with your class.

#include "vect2.hpp"
#include <iostream>

int main()
{
    vect2 v1; // 0, 0
    vect2 v2(1, 2); // 1, 2
    const vect2 v3(v2); // 1, 2
    vect2 v4 = v2; // 1, 2

    std::cout << "v1: " << v1 << std::endl;
    std::cout << "v1: " << "{" << v1[0] << ", " << v1[1] << "}" << std::endl;
    std::cout << "v2: " << v2 << std::endl;
    std::cout << "v3: " << v3 << std::endl;
    std::cout << "v4: " << v4 << std::endl;
    std::cout << v4++ << std::endl; // 2, 3
    std::cout << ++v4 << std::endl; // 3, 4
    std::cout << v4-- << std::endl; // 2, 3
    std::cout << --v4 << std::endl; // 1, 2
    v2 += v3; // 2, 4
    v1 -= v2; // -2, -4
    v2 = v3 + v3 *2; // 3, 6
    v2 = 3 * v2; // 9, 18
    v2 += v2 += v3; // 20, 40
    v1 *= 42; // -84, -168
    v1 = v1 - v1 +v1;
    std::cout << "v1: " << v1 << std::endl;
    std::cout << "v2: " << v2 << std::endl;
    std::cout << "-v2: " << -v2 << std::endl;
    std::cout << "v1[1]: " << v1[1] << std::endl;
    v1[1] = 12;
    std::cout << "v1[1]: " << v1[1] << std::endl;
    std::cout << "v3[1]: " << v3[1] << std::endl;
    std::cout << "v1 == v3: " << (v1 == v3) << std::endl;
    std::cout << "v1 == v1: " << (v1 == v1) << std::endl;
    std::cout << "v1 != v3: " << (v1 != v3) << std::endl;
    std::cout << "v1 != v1: " << (v1 != v1) << std::endl;
}
