/*problem_01.cpp

    3�̳� 5�� ������ �������� �ڿ����� ���� ����ϴ� ���α׷� �����ϱ�

    : ����ڰ� �Է��� ���ѱ����� �ڿ��� �� 3�̳� 5�� ������ �������� ���� ���� ���

    (�ڿ����� 1 �̻��� ��� ���� �̸�, ������ 0 �̸��� �� �Դϴ�. 0�� �ڿ����� ������ �ƴ� ������ �� �Դϴ�.)

*/

#include <iostream>

int main()
{
    unsigned int limit = 0;
    std::cout << "Upper limit:";
    std::cin >> limit;

    unsigned long long sum = 0;

    for (unsigned int i = 3; i < limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }

    std::cout << "sum=" << sum << std::endl;
}
