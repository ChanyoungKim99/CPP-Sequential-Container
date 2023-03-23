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

	// size ���� X
	// = �迭 ÷�� ��� �Ұ���		ex)list[0]

	// single linked list�� �����ͷ� ����Ǿ� �ִ� ����
	// �޸𸮿� ���ʴ�� ���Ұ� ���� X
	// = ������ ������ �Ұ����ϴ�	ex)ptr++

	// double linked list�� size�� ����������
	// single�� ���������� �迭 ÷�� ��� �Ұ���
}