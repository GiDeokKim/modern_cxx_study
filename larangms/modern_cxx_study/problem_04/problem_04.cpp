/* problem_04.cpp
    �־��� ������ ���� ���� ū �Ҽ��� ����ϴ� ���α׷� �����ϱ�
    ����ڿ� ���� �־��� ������ ���� ���� ū �Ҽ��� ����ϰ� ����϶�
    ����� �ݵ�� ���� �������� �Ѵ�.

    �Ҽ� : 1�� �ڽ�, �� ���� ���θ� ������ �������� ��

    https://www.youtube.com/watch?v=7190bHPx-Ro

    ������
    n != 1 �� �ڿ������

    - �Ҽ�
    - �ռ��� : ����� 3�� �̻��� ��, ���������� n���� ũ�� ���� �Ҽ��� ����� ������.

    => �ռ����� ���Ǹ� �̿��Ͽ� ���� : �ռ����� �ƴϸ� �Ҽ���    
    

    n �� �ռ������
    1, a ... n (1 < a < n)
        1) a^2 <= n
                a�� n�� ����̱� ������ 
                n = a * b   (b != n, b != 1)
                a <= b      (a�� ���� ���� ����� ����)
                a^2 <= a * b = n

            
        2) a�� �Ҽ� 
                a�� �ռ������ a = c * d               (1 < c, d < a)
                n = a * b = cd * b = c * (db)
                -> c�� a ���� ���� n�� ����� �Ǿ� ���


    ���: n �� �ռ������ �ݵ�� �����ؼ� n ���� ũ�� ���� �Ҽ��� ����� ���´�
*/

#include <iostream>

bool is_prime(int const num)
{
    if (num <= 3)
    {
        return num > 1;
    }
    else if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 5; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                return false;
            }
        }

        return true;
    }
}

int main()
{
    int limit = 0;
    std::cout << "Upper limit:";
    std::cin >> limit;

    for (int i = limit; i > 1; i--)
    {
        if (is_prime(i))
        {
            std::cout << "Largest prime:" << i << std::endl;
            return 0;
        }
    }
}
