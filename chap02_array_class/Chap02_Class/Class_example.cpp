#include "sports_car.h"  // ������Ͽ� �Է��� ��� �Լ� ��밡��. cstdio cstring�� �ȼ��� ��


int main()
{
	Car		yourCar;  //yourcar��� ��ü�� ����
	// Car myCar(100, "myCar", 4);
	yourCar.display(); // protected�� �Լ��´� ���� �Ұ�!
	yourCar.whereAmI();  //��ü�� �ּҸ� ��Ÿ���� �Լ�
	yourCar.gear = 5;
	yourCar.display();
	yourCar.changeGear(3); // ������Ͽ� int g=4�� �̸� �Է��� �Ǿ��ֱ⿡ �ƹ��͵� �Է����� ������ 4�ΰ����̴�, ���ڷ� �Է��ϸ� �׿� �°� �ٲ��., g�� ����Ʈ �Ű�������� �Ѵ�.
	yourCar.display();

	SportsCar myCar;
	myCar.setTurbo(true);
	myCar.speedUp();
	myCar.display();
	myCar.whereAmI();

	return 0;  //���� ����ϸ� ������Ͽ� �̸� gear speed�� ����Ǿ��ִ� 0���� ���´�.
}