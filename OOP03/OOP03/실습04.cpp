#include <iostream>
/**
*	parameter�� pointer type�� ����Ͽ� argument x�� ���������ϰԵȴ�.
*/
void increment(int *x)
{
	++(*x);
}
int main()
{
	int x = 55;
	std::cout << " Before increment: " << x << std::endl;
	increment(&x); // �ּ������� parameter�� �Է��ؾ���
	std::cout << " After increment: " << x << std::endl; // x�� ���������ϹǷ� x���� ���� ����
	system("pause");
	return 0;
}