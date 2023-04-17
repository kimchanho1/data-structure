#pragma once
#include <iostream>   // ����� ����
#include <string>  // ���ڿ� ���㤤
using namespace std; // ���ϰ� �ϱ�����

class Pet {
protected:
	string name;
	int age;
	string type;


public:
	Pet(string Name, int age, string type)
		: name(name), age(age), type(type) {} // ����ʱ�ȭ ����Ʈ�� ������ ����� ���� name-name, age-age, type-type�� ����

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

class Puppy : public Pet {   // puppyŬ������ pet�� ��ӹ޴´�.
private:
	string breed;

public:
	Puppy(string name, int age, string type, string breed)
		: Pet(name, age, type), breed(breed) {}// breed�� ���� �ʱ�ȭ �ϱ����� breed�Լ��� ���� �־��ذ�

	string getBreed() {
		return breed;
	}
};