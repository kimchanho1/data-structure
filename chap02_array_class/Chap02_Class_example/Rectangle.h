#pragma once

#include<iostream>

class Rectangle {
private:
	double width;
	double height;


public:
	Rectangle(double w, double h) {
		width = w;
		height = h;
	}
	double getArea() {
		return width * height;
	}

	double gePerimeter() {
		return 2 * (width * height);
	}

	bool isSquare() {  // bool은 true false 판별함수이다.
		return (width == height); 
	}

};