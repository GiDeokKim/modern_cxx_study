#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// adapter pattern
// ����� �����̶� Ŭ������ �������̽��� ����ڰ� ����ϴ� �ٸ� �������̽��� ��ȯ�ϴ� �����̴�.
// ���⼭�� array�� 2���� array�� ��ȯ�Ͽ���.

template <class T, size_t R, size_t C>
class array2d
{
    typedef T                   value_type;
    typedef value_type*         iterator;
    typedef value_type const*   const_iterator;

    std::vector<T> arr;

public:
    array2d() 
        : arr(R * C) {}

    explicit array2d(std::initializer_list<T> l) 
        : arr(l) {}

    // �䱸 ���� : data
    constexpr T* data() noexcept 
    { 
        return arr.data();
    }

    constexpr const T* data() const noexcept 
    { 
        return arr.data();
    }

    // �䱸 ���� : at
    constexpr T& at(const size_t r, const size_t c)
    {
        return arr.at(r * C + c);
    }

    constexpr const T& at(const size_t r, const size_t c) const
    {
        return arr.at(r * C + c);
    }

    // ()�� ���� dimension index�� ����
    // ����� container�� �޸� ���� ���̱� ���� �ϳ��� ���ӵ� �޸𸮿� ������
    constexpr T& operator() (const size_t r, const size_t c)
    {
        return arr[r * C + c];
    }

    constexpr const T& operator() (const size_t r, const size_t c) const
    {
        return arr[r * C + c];
    }

    constexpr bool empty() const noexcept
    {
        return R == 0 || C == 0;
    }

    // �䱸 ���� : �� ������ ũ�⸦ ��ȯ�ϴ� �޼ҵ�
    constexpr size_t size(const int rank) const
    {
        if (rank == 1)
        {
            return R;
        }
        else if (rank == 2)
        {
            return C;
        }

        throw std::out_of_range("Rank is out of range!");
    }

    // �䱸 ���� : �迭�� �� ���� ������ ä��� �޼ҵ�
    void fill(const T& value)
    {
        std::fill(std::begin(arr), std::end(arr), value);
    }

    // �䱸 ���� : ������ ������ �ٸ� ��ü�� ��ȯ�ϴ� �޼ҵ�
    void swap(array2d& other) noexcept
    {
        arr.swap(other.arr);
    }

    const_iterator begin() const
    {
        return arr.data();
    }

    const_iterator end() const
    {
        return arr.data() + arr.size();
    }

    iterator begin()
    {
        return arr.data();
    }

    iterator end()
    {
        return arr.data() + arr.size();
    }
};

template <class T, size_t R, size_t C>
void print_array2d(const array2d<T, R, C>& arr)
{
    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            std::cout << arr.at(i, j) << ' ';
        }

        std::cout << std::endl;
    }
}