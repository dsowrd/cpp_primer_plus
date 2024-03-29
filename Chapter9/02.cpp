#include <iostream>
#include <string>
using namespace std;

void strcount(string str);

int main() {
	string input;
	char next;

	cout << "영문으로 한 행을 입력하십시오:\n";
	getline(cin, input);
	while (input != "") {
		strcount(input);
		cout << "다음 행을 입력하십시오(끝내려면 빈 행을 입력) : \n";
		getline(cin, input);
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

void strcount(string str) {
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\"에는 ";
	for (int i = 0; str[i] != NULL; i++)
		count++;
	total += count;
	cout << count << "개의 문자가 있습니다.\n";
	cout << "지금까지 총 " << total << "개의 문자를 입력하셨습니다.\n";
}