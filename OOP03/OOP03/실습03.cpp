#include <iostream>
/**
* x를 입력받아 1을 더함(전위연산)
*/
void increment(int x)
{
	++x;
}
int main()
{
	int x = 55;
	std::cout << " Before increment: " << x << std::endl;
	increment(x); // 이때 increase 함수의 parameter x가 rvalue이므로 함수 종료 후 x의 값은 그대로이다.
	std::cout << " After increment: " << x << std::endl; // 따라서 출력되는 값은 이전의 x와 같은 55이다.

	system("pause");
	return 0;
}