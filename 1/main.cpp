#include <iostream>
#include <array>

int main()
{
	// array는 고정된 크기의 배열, 사이즈 넣어줘야함
	std::array<int, 4> myArray{ 0, 1, 2, 3 };

	// 위와 같이 컨테이너를 만들면 vector와 같은 표기법 사용가능
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