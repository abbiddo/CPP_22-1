/**
프로그램명 : example03.cpp
설명 : 사각형의 넓이 구하기 
작성일시 : 2022.01.01
작성자 : 정소영
**/

#include <iostream>
int main() {
	int width,height;
	
	std::cout << "가로 길이를 입력하세요 : ";
	std::cin >> width;
	std::cout << "세로 길이를 입력하세요 : ";
	std::cin >> height; 

	bool b=width==height;
	std::cout << "정사각형 여부 : " << b << "\n";
	std::cout << "넓이 : " << width*height;
}

/**
실행 결과
가로 길이를 입력하세요 : 5
세로 길이를 입력하세요 : 5
정사각형 여부 : 1
넓이 : 25
**/ 
