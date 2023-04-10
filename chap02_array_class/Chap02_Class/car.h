#pragma once
#include <cstdio>
#include<cstring>

class Car {
// private:은 자식클래스도 접속이 불가하다. 현재 class 내부에서만 접근이 가능하다.
protected: //자식클래스만 접속이 가능하게 한다.
	int		speed; // 속력
	char	name[40]; // 이름

public:  // 외부에서도 접근이 가능하다.
	int		gear;
	Car() :speed(0), gear(0), name("") {}   //생성자
	~Car() {}  //소멸자
	Car(int s, const char* n, int g) {
		strcpy_s(name, n);   // n 문자열을 name에 copy해라
	}

	void changeGear(int g = 4) {
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : 기어 = %단, 속도 =%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("객체 주소 = %p\n", this);
	}
};
