/**
프로그램명 : example10.cpp
설명 : 클래스와 객체 포인터를 이용한 삼각형의 넓이 
작성일시 : 2022.01.28
작성자 : 정소영
**/

#include <iostream>
using namespace std;

class TriangleArea{
	private:
		int width;
		int height;
		
	public:
		TriangleArea(int w, int h);
		float Calculate();
};

TriangleArea::TriangleArea(int w, int h){
	width=w;
	height=h;
}

float TriangleArea::Calculate(){
	return width*height/2.0;
}

int main(){
	int width, height;
	cout<<"가로 길이를 입력하세요. : ";
	cin>>width;
	cout<<"세로 길이를 입력하세요. : ";
	cin>>height;
	
	TriangleArea *triArea=new TriangleArea(width, height);
	cout<<"삼각형의 넓이는 "<<triArea->Calculate()<<"제곱센티미터 입니다."; 
}

/**
가로 길이를 입력하세요. : 3                 (입력) 
세로 길이를 입력하세요. : 7
삼각형의 넓이는 10.5제곱센티미터 입니다.    (출력) 
**/ 
