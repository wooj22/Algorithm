#include <iostream>
using namespace std;
#include <string>

/* 백준 단계별로 풀어보기 - 1. 입출력과 사칙연산 */
int main() {
	/// (1) Hello World! 출력하기
	/*
	cout << "Hello World!";
	*/

	/// (2) 두 수의 입력을 받고 합을 출력하기
	/*
	int a, b;
	cin >> a >> b;
	cout << a + b;
	*/

	/// (3) 두 수의 입력을 받고 차이를 출력하기
	/*
	int a, b;
	cin >> a >> b;
	cout << a - b;
	*/

	/// (4) 두 수의 입력을 받고 곱을 출력하기
	/*
	int a, b;
	cin >> a >> b;
	cout << a * b;
	*/

	/// (5) 두 수의 입력을 받고 나눈 몫을 출력하기
	/*
	int a, b;
	cin >> a >> b;
	double c = (double)a / (double)b;
	cout.precision(10);
	cout << c;
	*/

	/// (6) 두 수의 사칙연산 출력하기
	/*
	int a, b;
	cin >> a >> b;
	cout << a + b << "\n" << a - b << "\n" << a * b << "\n" << a / b << "\n" << a % b;
	*/

	/// (7) 회원가입 아이디 중복 체크
	/*
	string id;
	cin >> id;
	if (id.length() <= 50) {
		cout << id << "??!";
	}
	*/

	/// (8) 불기연도 -> 서기연도
	/*
	int boolYear;
	int seoYear;

	cin >> boolYear;
	seoYear = boolYear - 543;
	cout << seoYear;
	*/

	/// (9) 나머지
	/*
	int a, b, c;
	int q, w, e, r;
	cin >> a >> b >> c;

	q = (a + b) % c;
	w = ((a%c) + (b%c))%c;
	e = (a * b) % c;
	r = ((a % c) * (b % c)) % c;

	cout << q << '\n' << w << '\n' << e << '\n' << r;
	*/

	/// (10) 곱셈 과정
	/*
	int a, b;
	cin >> a >> b;

	cout << a * (b % 10) << endl;
	cout << a * ((b % 100) / 10) << endl;
	cout << a * (b / 100) << endl;

	cout << a * b;
	*/

	/// (11) 고양이 출력하기
	/*
	cout << "\\    /\\" << endl;
	cout << " )  ( ')" << endl;
	cout << "(  /  )" << endl;
	cout << " \\(__)|" << endl;
	*/

	/// (12) 개 출력하기
	/*
	cout << "|\\_/|" << endl;
	cout << "|q p|   /}" << endl;
	cout << "( 0 )\"\"\"\\" << endl;
	cout << "|\"^\"`    |" << endl;
	cout << "||_/=\\\\__|";
	*/
}