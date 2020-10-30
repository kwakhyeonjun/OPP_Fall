#include <iostream>
/**
*	parameter에 pointer type을 사용하여 argument x를 직접참조하게된다.
*/
void increment(int *x)
{
	++(*x);
}
int main()
{
	int x = 55;
	std::cout << " Before increment: " << x << std::endl;
	increment(&x); // 주소형식의 parameter를 입력해야함
	std::cout << " After increment: " << x << std::endl; // x를 직접참조하므로 x값이 직접 증가
	system("pause");
	return 0;
}