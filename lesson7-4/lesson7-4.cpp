﻿#include<iostream>
using namespace std;

template<class T>
T square(T x) {
	return x * x;
}

int main(void) {
	int a;
	double b;
	cout << "整数を入力してください" << endl;
	cin >> a;
	cout << a << "の2乗は" << square(a) << "です。" << endl;
	cout << "少数を入力してください。" << endl;
	cin >> b;
	cout << b << "の2乗は" << square(b) << "です。" << endl;
}