#include <iostream>
#include "BigInt.h"

// Вспомогательные функции для задач
BigInt factorial(int n) {
    BigInt res(1);
    for (int i = 2; i <= n; i++) res = res * i;
    return res;
}

BigInt fibonacci(int n) {
    if (n == 0) return BigInt(0);
    BigInt a(0), b(1);
    for (int i = 2; i <= n; i++) {
        BigInt temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

int main() {
    int input_1, input_2;

    // 1. Факториал [cite: 5]
    std::cout << "1. Enter input_1 (>100): ";
    std::cin >> input_1;
    factorial(input_1).print();

    // 2. 2^input_1 - 1 
    std::cout << "2. Enter input_1 (>64): ";
    std::cin >> input_1;
    (BigInt::powerOfTwo(input_1) - BigInt(1)).print();

    // 3. (2^input_1 - 1) + (2^input_2 - 1) 
    std::cout << "3. Enter input_1, input_2 (>64): ";
    std::cin >> input_1 >> input_2;
    BigInt val1 = BigInt::powerOfTwo(input_1) - BigInt(1);
    BigInt val2 = BigInt::powerOfTwo(input_2) - BigInt(1);
    (val1 + val2).print();

    // 4. 2^input_1 - 2^input_2 
    std::cout << "4. Enter input_1, input_2 (>64, i1 > i2): ";
    std::cin >> input_1 >> input_2;
    (BigInt::powerOfTwo(input_1) - BigInt::powerOfTwo(input_2)).print();

    // 5. Фибоначчи [cite: 11]
    std::cout << "5. Enter input_1 (>100): ";
    std::cin >> input_1;
    fibonacci(input_1).print();






    return 0;
}