#include <iostream>
// lab1 
#define PI 3.14159265359

int main()
{
    //v1
    char A = 3;
    char B = 4;
    char C = 6;
    //std::cout << (A + B + C) / 2.0f << std::endl;
    float p = (A + B + C) / 2.0f;
    std::cout << sqrt(p*(p-A) * (p-B) * (p-C)) << std::endl;


    //v2
    /*int h = 8;
    int a = 1024;
    float S = (a * h) / 2.0f;
    std::cout << S << std::endl;*/

    //v3
    /*int A, B;
    std::cout << "Enter number" << std::endl;
    std::cin >> A;
    std::cout << "Enter 2 number" << std::endl;
    std::cin >> B;
    int P = 2 * (A + B);
    std::cout << P << std::endl;*/

    //v4
    /*char R = 46;
    std::cout << 2 * PI * pow(R,2) << std::endl;*/

}