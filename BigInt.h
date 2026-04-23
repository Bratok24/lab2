#ifndef BIGINT_H
#define BIGINT_H

#include <vector>
#include <string>
#include <iostream>

class BigInt {
public:
    std::vector<int> digits; // Цифры хранятся в обратном порядке (от младших к старшим)

    BigInt(long long n = 0);
    void print() const;

    // Сложение
    BigInt operator+(const BigInt& other) const;
    // Вычитание (предполагаем, что результат положительный)
    BigInt operator-(const BigInt& other) const;
    // Умножение на обычное число (для факториала)
    BigInt operator*(int n) const;
    
    static BigInt powerOfTwo(int n);
};

#endif