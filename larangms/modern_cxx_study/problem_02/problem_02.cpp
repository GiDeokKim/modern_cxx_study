/*problem_02.cpp

    �ִ����� ���α׷� �����ϱ�

    ���� ���� �ΰ��� �־����� ��, �� ���� �ִ������� ����ϰ� ���
    
    �ִ�����(Greatest Common Divisor, GCD)
    : �־��� �� ��θ� ������ �������� ����� ���� ū ���� ���� 

    ���� gcd(a, b) = 1�̸�, �� �� a, b�� ���μ�(coprime) ���迡 �ִٰ� �Ѵ�.
    ��Ŭ���� �˰����� ���� ȿ�����̴�.
*/

#include <iostream>
#include <numeric>

// ��͸� ���� ����
uint32_t gcd1(uint32_t const a, uint32_t const b)
{
    return b == 0 ? a : gcd1(b, a % b);
}

// ����� ����
uint32_t gcd2(uint32_t a, uint32_t b)
{
    while (b != 0)
    {
        uint32_t r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main()
{
    std::cout << "Input numbers:";

    uint32_t a, b;
    std::cin >> a >> b;

    std::cout << "rec gcd(" << a << ", " << b << ") = " << gcd1(a, b) << std::endl;
    std::cout << "gcd(" << a << ", " << b << ") = " << gcd2(a, b) << std::endl;
    std::cout << "std::gcd(" << a << ", " << b << ") = " << std::gcd(a, b) << std::endl;
}
