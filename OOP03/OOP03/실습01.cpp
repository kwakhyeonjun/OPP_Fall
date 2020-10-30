#include <string>
#include <iostream>

int main() {
	std::string s; // 문자열 s를 입력받기 위한 변수
	std::cout << "문자를 입력하세요(100자 이내)." << std::endl; // 문자를 입력받기 위해 문자열 입력을 요청함
	std::cin >> s; // s에 문자열 입력
	std::cout << "입력된 문자는 " << s << "입니다." << std::endl; // 입력된 문자열을 출력함

	system("pause");

	return 0;
}