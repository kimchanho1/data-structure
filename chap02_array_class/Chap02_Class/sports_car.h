#pragma once
#include "car.h"


class SportsCar : public Car   //car를 상속받아 만들겠다.
{
public:
	bool bTurbo;
	SportsCar() {}		//생성자
	~SportsCar() {}		//소멸자
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