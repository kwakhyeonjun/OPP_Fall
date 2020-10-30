#include <iostream>
using namespace std;

class LetsDebug
{
public:
	void printNum()
	{
		short s1 = 32767; // s1 = 32767
		short s2 = 1; // s2 = 1
		short s3 = (short)s1 + s2; // s3 = -32768 (overflow)
		cout << "Lets Debug with short type : " << s3 << endl;
	}
};
class fixLetsDebug
{
public:
	void printNum()
	{
		int s1 = 32767; // s1 = 32767
		int s2 = 1; // s2 = 1
		int s3 = (int)s1 + s2; // s3 = 32768
		cout << "Lets Debug with int type : " << s3 << endl;
	}
};

int main() {
	LetsDebug *letsdebug = new LetsDebug; // short type
	letsdebug->printNum();

	fixLetsDebug* fixletsdebug = new fixLetsDebug; // int type
	fixletsdebug->printNum();

	return 0;
}





/**
 * Hello World
 */
//int main() {
//	std::cout << "Hello World" << std::endl;
//
//	return 0;
//}