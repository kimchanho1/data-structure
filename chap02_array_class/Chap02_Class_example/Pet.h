#pragma once
#include <iostream>   // 입출력 관련
#include <string>  // 문자열 과녈ㄴ
using namespace std; // 편하게 하기위해

class Pet {
protected:
	string name;
	int age;
	string type;


public:
	Pet(string Name, int age, string type)
		: name(name), age(age), type(type) {} // 멤버초기화 리스트로 생성자 만들기 각각 name-name, age-age, type-type을 뜻함

	string getName() {
		return name;
}
	int getAge() {
		return age;
	}
	string getType() {
		return type;
	}

};

class Puppy : public Pet {   // puppy클래스는 pet을 상속받는다.
private:
	string breed;

public:
	Puppy(string name, int age, string type, string breed)
		: Pet(name, age, type), breed(breed) {}// breed를 따로 초기화 하기위해 breed함수를 따로 넣어준것

	string getBreed() {
		return breed;
	}
};