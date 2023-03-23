#include <iostream>
#include <deque>

int main()
{
	std::deque<int> container{ 10, 11, 20, 21 };

	for (auto e : container)
	{
		std::cout << e << std::endl;
	}

	for (auto iter = container.begin(); iter != container.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	// �迭 ÷�� ��� ����!
	std::cout << container[0] << std::endl;

}