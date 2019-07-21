#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
const char * Sname[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

void fill(std::array<double, Seasons> *pa);
void show(std::array<double, Seasons> da);

int main() {
	std::array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(std::array<double, Seasons> *pa) {
	using std::cin;
	using std::cout;
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << "�� �Ҹ�Ǵ� ���: ";
		cin >> (*pa)[i];
	}
}
void show(std::array<double, Seasons> da) {
	using std::cout;
	using std::endl;

	double total = 0.0;
	cout << "\n������ ���\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << " : $" << da[i] << endl;
		total += da[i];
	}
	cout << "�� ��� : $" << total << endl;
}