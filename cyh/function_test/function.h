#pragma once
#include <vector>
#include <string>

#include "using_types.h"

using namespace std;

class Function
{
public:
	// ���μ�����
	static vector<UINT64> PrimeFactorization(UINT64 n);
	static UINT64 BinaryToGrayCode(UINT64 n);
	static UINT64 GrayCodeToBinary(UINT64 n);
	// 2^x + (0 or 1)���� x�� ���� ��ȯ
	static UINT64 Exponent(UINT64 n);
	// base���� index ��° ��Ʈ�� ��ȯ
	static UINT64 Bit(UINT64 base, UINT64 index);
	// n�� �θ����ڷ� ��ȯ�Ͽ� ��ȯ
	static wstring RomaNumber(UINT64 n);
};

