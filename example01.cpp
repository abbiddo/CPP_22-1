/**
���α׷��� : example01.cpp
���� : �л� ������ ��� ����ü ����  
�ۼ��Ͻ� : 2022.01.01
�ۼ��� : ���ҿ�
**/

#include <iostream>
struct Student {
	int number, age, korea, math, science;
};

int main() {
	struct Student s;
	s.number = 25;
	s.age = 15;
	s.korea = 90;
	s.math = 85;
	s.science = 95;

	std::cout << "��ȣ�� " << s.number << "�� �л��� ���� :\n";
	std::cout << "���� : " << s.age << '\n';
	std::cout << "���� : " << s.korea << '\n';
	std::cout << "���� : " << s.math << '\n';
	std::cout << "���� : " << s.science << '\n';
}

/**
���� ���
��ȣ�� 25�� �л��� ���� :
���� : 15
���� : 90
���� : 85
���� : 95

**/ 
