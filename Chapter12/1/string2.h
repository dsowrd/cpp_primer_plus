// string1.h -- Ȯ�� ������ String Ŭ���� ����

#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char* str;             // ���ڿ��� �����ϴ� ������
	int len;                // ���ڿ��� ����
	static int num_strings; // ��ü�� ��
	static const int CINLIM = 80;  // cin �Է� �Ѱ�
public:
	// �����ڿ� ��Ÿ �޼���
	String(const char* s); // ������
	String();               // ����Ʈ ������
	String(const String&); // ���� ������
	~String();              // �ı���
	int length() const { return len; }
	void stringlow();
	void stringup();
	int has(char c);
	// �����ε� ������ �޼���
	String& operator=(const String&);
	String& operator=(const char*);
	char& operator[](int i);
	const char& operator[](int i) const;
	// �����ε� ������ ������
	friend bool operator<(const String& st, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);
	friend String& operator+(const String& st1, const String& st2);
	// static �Լ�
	static int HowMany();
};
#endif