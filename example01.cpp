/**
프로그램명 : example01.cpp
설명 : 학생 정보를 담는 구조체 설계  
작성일시 : 2022.01.01
작성자 : 정소영
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

	std::cout << "번호가 " << s.number << "인 학생의 정보 :\n";
	std::cout << "나이 : " << s.age << '\n';
	std::cout << "국어 : " << s.korea << '\n';
	std::cout << "수학 : " << s.math << '\n';
	std::cout << "과학 : " << s.science << '\n';
}

/**
실행 결과
번호가 25인 학생의 정보 :
나이 : 15
국어 : 90
수학 : 85
과학 : 95

**/ 
