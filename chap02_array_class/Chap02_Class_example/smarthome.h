#pragma once
#include<iostream>
#include<string>
using namespace std; // std�Ƚᵵ ��

class SmartHome {
private:
	string owner;
	int temperature;
	int humidity;
	bool security;

public:
	SmartHome(string owner, int temperature, int humidity, bool security) {
		this->owner = owner;
		this->temperature = temperature;
		this->humidity = humidity;
		this->security = security;





	}
	/*
	SmartHome(string o, int t, int h, bool s) {
		owner = o;
		temperature = t;
		humidity = h;
		security = s;





	}
	*/ // �Ѵ� �Ȱ���.

	void setTemerature(int temperature) {
		this->temperature = temperature;
	}
	void setHumidity(int humidity) {
		this-> humidity = humidity;
	}
	void setSecurity(int security) {
		this->security = security;

	int setTemerature() {
		return this->temperature = temperature;
	}
	int setHumidity() {
		return this-> humidity = humidity;
	}
	int setSecurity() {
		return this->security = security;
	}
	void printStatus() {
		cout << "������:" 
};