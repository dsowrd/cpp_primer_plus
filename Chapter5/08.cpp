#include <iostream>
#include <cstring>

int main() {
	using namespace std;
	char word[20];
	int count = 0;

	cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력) :" << endl;

	do {
		count++;
		cin >> word;
	} while (strcmp(word, "done") != 0);
	count--;

	cout << "총 " << count << " 단어가 입력되었습니다." << endl;
	return 0;
}