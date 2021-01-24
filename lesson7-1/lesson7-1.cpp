#include<iostream>
using namespace std;

int square(int x) {
	return x * x;
}

int main(void) {
	int a;
	cout << "整数を入力してください" << endl;
	cin >> a;
	cout << a << "の2乗は" << square(a) << "です。" << endl;
}