#include "sports_car.h"  // 헤더파일에 입력한 모든 함수 사용가능. cstdio cstring도 안서도 됨


int main()
{
	Car		yourCar;  //yourcar라는 객체를 만듬
	// Car myCar(100, "myCar", 4);
	yourCar.display(); // protected의 함수는는 접근 불가!
	yourCar.whereAmI();
	yourCar.gear = 5;
	yourCar.display();
	yourCar.changeGear(3); // int g=4로 미리 입력이 되어있기에 아무것도 입력하지 않으면 4로고정이다, 숫자로 입력하면 그에 맞게 바뀐다.
	yourCar.display();

	SportsCar myCar;
	myCar.setTurbo(true);
	myCar.speedUp();
	myCar.display();
	myCar.whereAmI();

	return 0;  //값을 출력하면 헤더파일에 미리 gear speed에 저장되어있는 0값이 나온다.
}