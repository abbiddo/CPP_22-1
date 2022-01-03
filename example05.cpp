/**
프로그램명 : example05.cpp
설명 : 원하는 정수의 합과 곱 구하기 
작성일시 : 2022.01.03
작성자 : 정소영
**/

#include <iostream>
int main() {
	int sum=0, mul=1;
	
	std::cout<<"1~10 사이의 숫자중\n";
	
	for (int i=1;i<=10;i+=2) mul*=i;
	for (int i=2;i<=10;i+=2) sum+=i;
	
	std::cout<<"홀수의 곱 = "<<mul<<"\n";
	std::cout<<"짝수의 합 = "<<sum; 
}

/**
실행 결과
1~10 사이의 숫자중
홀수의 곱 = 945
짝수의 합 = 30
**/ 
