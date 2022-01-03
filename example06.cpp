/**
프로그램명 : example06.cpp
설명 : 원하는 정수의 합과 곱 구하기 
작성일시 : 2022.01.03
작성자 : 정소영
**/

#include <iostream>
int main() {
	int min,max,n=1,sum=0, mul=1;
	
	std::cout<<"최솟값을 입력하세요 : ";
	std::cin>>min; 
	std::cout<<"최댓값을 입력하세요 : ";
	std::cin>>max; 
	
	while (n){
		std::cout<<"==================================\n\n";
		std::cout<<"1. min~max 합.\n2.min~max 곱.\n3.min~max 짝수 출력.\n4.min~max 홀수 출력.\n";
		std::cout<<"\n==================================\n";
		std::cout<<"메뉴를 선택하세요 : ";
	
		std::cin>>n;
	
		switch(n){
			case 1:
				for (int i=min;i<=max;i++) sum+=i;
				std::cout<<min<<" ~ "<<max<<"까지의 합 : "<<sum<<"\n";
				break;
				
			case 2:
				for (int i=min;i<=max;i++) mul*=i;
				std::cout<<min<<" ~ "<<max<<"까지의 곱 : "<<mul<<"\n";
				break;
				
			case 3:
				std::cout<<min<<" ~ "<<max<<"사이의 짝수는: \n";
				for (int i=min;i<=max;i++)
					if (i%2==0)
						std::cout<<i<<" ";
				std::cout<<"\n";
				break;
				
			case 4:
				std::cout<<min<<" ~ "<<max<<"사이의 홀수는: \n";	
				for (int i=min;i<=max;i++)
					if (i%2==1)
						std::cout<<i<<" ";
				std::cout<<"\n";
				break;
				
			default:
				std::cout<<"잘못된 입력입니다.\n";
		}
	}
}

/**
실행 결과
최솟값을 입력하세요 : 1
최댓값을 입력하세요 : 10
==================================

1. min~max 합.
2.min~max 곱.
3.min~max 짝수 출력.
4.min~max 홀수 출력.

==================================
메뉴를 선택하세요 : 1
1 ~ 10까지의 합 : 55
==================================

1. min~max 합.
2.min~max 곱.
3.min~max 짝수 출력.
4.min~max 홀수 출력.

==================================
메뉴를 선택하세요 : 2
1 ~ 10까지의 곱 : 3628800
==================================

1. min~max 합.
2.min~max 곱.
3.min~max 짝수 출력.
4.min~max 홀수 출력.

==================================
메뉴를 선택하세요 : 3
1 ~ 10사이의 짝수는:
2 4 6 8 10
==================================

1. min~max 합.
2.min~max 곱.
3.min~max 짝수 출력.
4.min~max 홀수 출력.

==================================
메뉴를 선택하세요 : 4
1 ~ 10사이의 홀수는:
1 3 5 7 9
==================================

1. min~max 합.
2.min~max 곱.
3.min~max 짝수 출력.
4.min~max 홀수 출력.

==================================
메뉴를 선택하세요 : 0

**/ 
