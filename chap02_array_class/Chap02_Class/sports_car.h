#pragma once
#include "car.h"


class SportsCar : public Car   //car�� ��ӹ޾� ����ڴ�.
{
public:
	bool bTurbo;
	SportsCar() {}		//������
	~SportsCar() {}		//�Ҹ���
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}

	void speedUp() {
		if (bTurbo)
			speed += 20;
		else
			Car:: speedUp();
	}

};