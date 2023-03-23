#include <iostream>
#include <array>

int main()
{
	// array�� ������ ũ���� �迭, ������ �־������
	std::array<int, 4> myArray{ 0, 1, 2, 3 };

	// ���� ���� �����̳ʸ� ����� vector�� ���� ǥ��� ��밡��
	for (auto e : myArray)
	{
		std::cout << e << std::endl;
	}

	for (auto iter = myArray.begin(); iter != myArray.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	for (int i = 0; i < myArray.size(); i++)
	{
		std::cout << myArray[i] << std::endl;
	}
}