#include <iostream>

class SetValue
{
public:
	int x, y;
	void setXY(int _x, int _y)
	{
		this->x = _x;
		this->y = _y;
	}
	void show()
	{
		std::cout << "X= " << x << ", Y= " << y << std::endl;
	}
};

int main()
{
	SetValue obj;
	obj.setXY(33, 44);
	obj.show();

	system("pause");
	return 0;
}