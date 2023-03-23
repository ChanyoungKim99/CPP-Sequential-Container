#include <iostream>
#include <forward_list>

int main()
{
	std::forward_list<int> list{ 10, 11, 20, 21 };

	for (auto e : list)
	{
		std::cout << e << std::endl;
	}

	for (auto iter = list.begin(); iter != list.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	// size 존재 X
	// = 배열 첨자 사용 불가능		ex)list[0]

	// single linked list는 포인터로 연결되어 있는 구조
	// 메모리에 차례대로 원소가 나열 X
	// = 포인터 연산이 불가능하다	ex)ptr++

	// double linked list는 size는 존재하지만
	// single과 마찬가지로 배열 첨자 사용 불가능
}