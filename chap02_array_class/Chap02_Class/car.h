#pragma once
#include <cstdio>
#include<cstring>

class Car {
// private:�� �ڽ�Ŭ������ ������ �Ұ��ϴ�. ���� class ���ο����� ������ �����ϴ�.
protected: //�ڽ�Ŭ������ ������ �����ϰ� �Ѵ�.
	int		speed; // �ӷ�
	char	name[40]; // �̸�

public:  // �ܺο����� ������ �����ϴ�.
	int		gear;
	Car() :speed(0), gear(0), name("") {}   //������
	~Car() {}  //�Ҹ���
	Car(int s, const char* n, int g) {
		strcpy_s(name, n);   // n ���ڿ��� name�� copy�ض�
	}

	void changeGear(int g = 4) {
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : ��� = %��, �ӵ� =%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("��ü �ּ� = %p\n", this);
	}
};
