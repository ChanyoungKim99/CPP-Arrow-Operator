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
	// ����ü�� �����Ͱ� �����ϴ�


	std::cout << (*pStatus).HP << std::endl;
	std::cout << (*pStatus).MP << std::endl;

	// .�� *���� �켱������ �����Ƿ� ���� ���� ǥ���ؾ� �Ѵ�.

	// �����ڰ� ���� ���϶�, ������ ��ٸ�
	// �������� "�켱����"�� �ǽ��غ���



	// arrow operator�� ����ϸ�

	std::cout << pStatus->HP << std::endl;
	std::cout << pStatus->MP << std::endl;

	// �̷��� ǥ���� ����������
}