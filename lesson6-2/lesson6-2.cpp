#include<iostream>
using namespace std;

int main(void){
	int a, sum = 0;
	cout << "テストの点数を入力してください。" << endl;
	do {
		cin >> a;
		sum += a;
	} while (a);
	cout << "テストの合計点は" << sum << "点です。" << endl;
}