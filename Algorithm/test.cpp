#include <iostream>
using namespace std;
#include <string>

/* ���� �ܰ躰�� Ǯ��� - 1. ����°� ��Ģ���� */
int main() {
	/// (1) Hello World! ����ϱ�
	/*
	cout << "Hello World!";
	*/

	/// (2) �� ���� �Է��� �ް� ���� ����ϱ�
	/*
	int a, b;
	cin >> a >> b;
	cout << a + b;
	*/

	/// (3) �� ���� �Է��� �ް� ���̸� ����ϱ�
	/*
	int a, b;
	cin >> a >> b;
	cout << a - b;
	*/

	/// (4) �� ���� �Է��� �ް� ���� ����ϱ�
	/*
	int a, b;
	cin >> a >> b;
	cout << a * b;
	*/

	/// (5) �� ���� �Է��� �ް� ���� ���� ����ϱ�
	/*
	int a, b;
	cin >> a >> b;
	double c = (double)a / (double)b;
	cout.precision(10);
	cout << c;
	*/

	/// (6) �� ���� ��Ģ���� ����ϱ�
	/*
	int a, b;
	cin >> a >> b;
	cout << a + b << "\n" << a - b << "\n" << a * b << "\n" << a / b << "\n" << a % b;
	*/

	/// (7) ȸ������ ���̵� �ߺ� üũ
	/*
	string id;
	cin >> id;
	if (id.length() <= 50) {
		cout << id << "??!";
	}
	*/

	/// (8) �ұ⿬�� -> ���⿬��
	/*
	int boolYear;
	int seoYear;

	cin >> boolYear;
	seoYear = boolYear - 543;
	cout << seoYear;
	*/

	/// (9) ������
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

	/// (10) ���� ����
	/*
	int a, b;
	cin >> a >> b;

	cout << a * (b % 10) << endl;
	cout << a * ((b % 100) / 10) << endl;
	cout << a * (b / 100) << endl;

	cout << a * b;
	*/

	/// (11) ����� ����ϱ�
	/*
	cout << "\\    /\\" << endl;
	cout << " )  ( ')" << endl;
	cout << "(  /  )" << endl;
	cout << " \\(__)|" << endl;
	*/

	/// (12) �� ����ϱ�
	/*
	cout << "|\\_/|" << endl;
	cout << "|q p|   /}" << endl;
	cout << "( 0 )\"\"\"\\" << endl;
	cout << "|\"^\"`    |" << endl;
	cout << "||_/=\\\\__|";
	*/
}