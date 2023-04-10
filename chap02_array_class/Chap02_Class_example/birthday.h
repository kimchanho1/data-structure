#pragma once
#include <cstring>
class Birthday { // 71p에 있음
public:
	int month;
	int date;
};
class Student {
public:
	char name[100];
	Birthday bDay; //다른 클래스를 멤버변수로
};