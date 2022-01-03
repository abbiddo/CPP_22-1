/**
프로그램명 : example08.cpp
설명 : 삼각혀의 넓이 구하기 
작성일시 : 2022.01.03
작성자 : 정소영
**/

#include <iostream> 

int triangle(int w, int h){
	return w*h/2;
} 

int main() {
	int width, height;
	
	std::cout<<"밑변의 길이를 입력하세요 : ";
	std::cin>>width;
	std::cout<<"높이를 입력하세요 : ";
	std::cin>>height;
	
	std::cout<<"삼각형의 넓이는 : "<<triangle(width,height);
}

/**
밑변의 길이를 입력하세요 : 10
높이를 입력하세요 : 5
삼각형의 넓이는 : 25
**/ 
