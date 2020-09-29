// copyCat_firstTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include "list.h"
using namespace std;

int main()
{
	List List_1;
	int post1, choice;

	List_1.add(11);
	List_1.add(20);
	List_1.add(33);
	List_1.add(4);
	List_1.add(25);
	List_1.add(36);
	List_1.add(71);
	List_1.add(8);
	List_1.add(99);
	List_1.add(10);

	do
	{
		cout << "---------------------------" << endl;
		cout << "Selet your choices: " << endl;
		cout << "1. Xem toan bo cac thanh phan" << endl;
		cout << "2. xem so bang vi tri" << endl;
		cout << "3. xem tong so thanh phan" << endl;
		cout << "4. chen" << endl;
		cout << "5. Xoa thanh phan" << endl;
		cout << "0. exit" << endl;

		cin >> choice;
		cout << "---------------------------" << endl;

		switch (choice)
		{
		case 0:
		{
			break;
		}
		case 1:
		{
			cout << "cac thanh phan trong list: " << endl;
			List_1.showUpAll();
			break;

		}
		case 2:
		{
			cout << "Nhap vi tri so muon xem: " << endl;
			cin >> post1;
			cout << List_1.get(post1) << endl;
			break;

		}
		case 3:
		{
			cout << List_1.count() << endl;
			break;

		}
		case 4:
		{
			int post, value;
			cout << "Nhap vi tri muon chen: " << endl;
			cin >> post;
			cout << "nhap gia tri muon chen: " << endl;
			cin >> value;
			List_1.insert(value, post);
			cout << "chen hoan tat" << endl;
			break;

		}
		case 5:
		{
			int post;
			cout << "nhap vi tri can xoa: " << endl;
			cin >> post;
			List_1.deleteElment(post);
			cout << "xoa hoan tat" << endl;
			break;
		}
		}
		cout << "ban muon tiep tuc khong (Y/N):" << endl;
		char answerYN[1];
		cin >> answerYN;
		if ((answerYN[0] == 'y') or (answerYN[0] == 'Y'))
		{
			choice = 1;
		}
		else
		{
			choice = 0;
		}
		system("cls");
	} while (choice != 0);
	
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
