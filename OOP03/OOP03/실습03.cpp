#include <iostream>
/**
* x�� �Է¹޾� 1�� ����(��������)
*/
void increment(int x)
{
	++x;
}
int main()
{
	int x = 55;
	std::cout << " Before increment: " << x << std::endl;
	increment(x); // �̶� increase �Լ��� parameter x�� rvalue�̹Ƿ� �Լ� ���� �� x�� ���� �״���̴�.
	std::cout << " After increment: " << x << std::endl; // ���� ��µǴ� ���� ������ x�� ���� 55�̴�.

	system("pause");
	return 0;
}