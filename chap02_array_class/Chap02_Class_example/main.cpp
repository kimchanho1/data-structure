#include "Polynomial.h"
#include "birthday.h"
#include "Rectangle.h"
#include "smarthome.h"

void swap(int& x, int& y)  // 참조에의한 레퍼런스
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp; 
}

int main() {
/*
	Polynomial a, b, c;

	a.read();
	b.read();
	c.add(a, b);

	a.display("A=");
	b.display("B=");
	c.display("C= A+B =");
	*/
	/*
	Student eei[10];
	strcpy_s(eei[2].name, "조형기");
	eei[2].bDay.month = 2;
	eei[2].bDay.date = 15;
	printf("이름은 %s, 생일은 %d월 %d일 생입니다. \n", eei[2].name, eei[2].bDay.month, eei[2].bDay.date);
	*/


	// 72p .참조형 또는 래퍼런스 형
	/* 
	int a = 1, b = 2;
	printf("a=%d, b=%d\n", a, b);
	swap(a, b);
	printf("swap호출 후 a=%d, b=%d", a, b);
	

	return 0;
	*/

	/*Rectangle r1(4, 5);
	printf("rectangle 1 Area : %lf\n", r1.getArea());   // printf 사용
	std::cout << "rectangle 1 Area : " << r1.getArea() << std::endl; // iostream의 cout 사용, endl은 줄바꿈
	std::cout << "Is square?" << r1.isSquare() << std::endl;


	/*SmartHome myHome("홍길동", 23, 40, true);
	myHome. printStature()
	myHome. set
	*/
}