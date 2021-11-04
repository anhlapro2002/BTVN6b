// BTVN6b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void nhapmang(int x, int mangsotunhien[]) {
	for (int i = 0; i < x; i++) {
		cout << " Nhap vao mang so tu nhien phan tu thu " << i + 1 << " la: " << endl;
		cin >> mangsotunhien[i];
	}
}

void sapxepmangtangdan(int x, int mangsotunhien[]) {
	int sotrunggian = 0;
	for (int i = 0; i < x - 1; i++) {
		for (int j = i + 1; j < x; j++) {
			if (mangsotunhien[i] > mangsotunhien[j]) {
				sotrunggian = mangsotunhien[i];
				mangsotunhien[i] = mangsotunhien[j];
				mangsotunhien[j] = sotrunggian;
			}
		}
	}
}

void xuatmang(int x, int mangsotunhien[]) {
	for (int i = 0; i < x; i++) {
		cout << mangsotunhien[i] << "\t";
	}
}

int main() {
	int mangsotunhien[9999];
	int x;
	cout << " Nhap vao so phan tu trong mang " << endl;
	cin >> x;
	nhapmang(x, mangsotunhien);
	sapxepmangtangdan(x, mangsotunhien);
	cout << " Mang so tu nhien sau khi sap xep: " << endl;
	xuatmang(x, mangsotunhien);
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
