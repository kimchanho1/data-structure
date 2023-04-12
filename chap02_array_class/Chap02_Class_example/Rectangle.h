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

	bool isSquare() {  // bool�� true false �Ǻ��Լ��̴�.
		return (width == height); 
	}

};