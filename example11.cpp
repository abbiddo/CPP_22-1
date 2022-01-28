/**
프로그램명 : example11.cpp
설명 : 클래스의 상속을 이용한 성적 관리 프로그램 
작성일시 : 2022.01.28
작성자 : 정소영
**/

#include <iostream>
using namespace std;

class Student{
	public:
		Student(){
			number=0;
			grade=0;
		};
		Student(int n, int g):number(n),grade(g){};
		~Student(){};
		
		int GetNumber() { return number; };
		int GetGrade() { return grade; };
		
	private:
		int number;
		int grade;
};

class Calculator{
	public:
		Calculator(){ numberOfStudent=0; };
		void AddStudent(Student s);
		int Sum();
		
	private:
		Student student[50];
		
	protected:
		int numberOfStudent;
};

void Calculator::AddStudent(Student s){
	student[numberOfStudent++]=s;
}

int Calculator::Sum(){
	int sum=0;
	for (int i=0;i<numberOfStudent;i++) sum+=student[i].GetGrade();
	
	return sum;
};

class CalculatorEx:public Calculator{
	public:
		CalculatorEx(){};
		float Average(){return Sum()/(float)numberOfStudent;}
};

int main(){
	Student student1(1, 30);
	Student student2(2, 90);
	Student student3(3, 100);
	Student student4(4, 50);
	
	CalculatorEx cal;
	cal.AddStudent(student1);
	cal.AddStudent(student2);
	cal.AddStudent(student3);
	cal.AddStudent(student4);
	
	cout<<cal.Sum()<<'\n'<<cal.Average();
}

/**
270  (출력) 
67.5
**/ 
