#include <iostream>

int main()
{
	struct Status
	{
		int HP;
		int MP;
	};

	Status myStatus{ 10, 1 };
	Status* pStatus{ &myStatus };
	// 구조체도 포인터가 가능하다


	std::cout << (*pStatus).HP << std::endl;
	std::cout << (*pStatus).MP << std::endl;

	// .가 *보다 우선순위가 높으므로 위와 같이 표기해야 한다.

	// 연산자가 여러 개일때, 에러가 뜬다면
	// 연산자의 "우선순위"를 의심해보자



	// arrow operator를 사용하면

	std::cout << pStatus->HP << std::endl;
	std::cout << pStatus->MP << std::endl;

	// 이렇게 표현이 가능해진다
}