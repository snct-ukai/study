#include<iostream>
using namespace std;

void add(int& x, int& y, int a) {
	x += a;
	y += a;
}

int main(void) {
	int x, y, a;
	cout << "2科目分の点数を入力してください。" << endl;
	cin >> x >> y;
	cout << "加算する点数を入力してください。" << endl;
	cin >> a;
	cout << a << "点加算しましたので" << endl;
	add(x, y, a);
	cout << "科目1は" << x << "点となりました。" << endl;
	cout << "科目2は" << y << "点となりました。" << endl;
}