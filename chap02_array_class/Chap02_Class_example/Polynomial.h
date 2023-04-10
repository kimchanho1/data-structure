#pragma once
#include<cstdio>
#include<vector>
#include<iostream>
#define MAX_DEGREE 100
using namespace std;

class PolynomialV {
	//std ::vector<float> coef; 앞에 namespace std덕에 생략 가능
	vector<float> coef;
public:
	int degree() {
		return coef.size();    // coef vector의 크기 반환
	}
	void read() {
		int deg;
		float value;


		printf("다항식의 최고 차수를 입력하세요:");
		scanf_s("%d", &deg);   // degree 값에 저장할 값 입력
		printf("각 항의 계수를 입력하세요 (총%d개) :", deg + 1);
		for (int i = 0; i <= deg; i++)
		{
			scanf_s("%f", &value);//
			coef.push_back(value);
		}

	}
};

class Polynomial {
	int degree;	// 다항식의 최고 차수
	float coef[MAX_DEGREE];  // 각 항에 대한 계수(coefficient)

public:
	Polynomial() {
		degree = 0; // degree 0으로 초기화
		coef[0] = 0.0f;  // coef 배열의 0번째 0.0f로 초기화
	}
	// Polynomial() : degree(0) {}; 위의 함수랑 동일

	void read() {
		printf("다항식의 최고 차수를 입력하세요:");
		scanf_s("%d", &degree);   // degree 값에 저장할 값 입력
		printf("각 항의 계수를 입력하세요 (총%d개) :", degree + 1);
		for (int i = 0; i <= degree; i++)
		{
			scanf_s("%f", coef + i); // 
		}
	}
	void display(const char* str = "Poly = ") {
		printf("\t%s", str); // \t는 tap만큼 거리를 벌리는 것, str은 문자열
		for (int i = 0; i < degree; i++)
			printf("%5.1f x^%d +", coef[i], degree - i);

		printf("%4.1f\n", coef[degree]);
	}
	void add(Polynomial a, Polynomial b) {
		if (a.degree > b.degree) {
			*this = a;
			for (int i = 0; i<= b.degree; i++)
				coef[i + (degree - b.degree)] += b.coef[i];
		}
		else {
			*this = b;
			for (int i = 0; i <= a.degree - b.degree; i++) 
				coef[i+(degree-a.degree)] += a.coef[i];
		}
	}
	bool isZero() { return degree == 0; }
};