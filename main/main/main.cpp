// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
	{
		 int count; // ���������� ��� ������ � switch
		 double a, b; // ���������� ��� �������� ���������
			cout << "Vvedite pervoe chislo: ";
			cin >> a;
			cout << "Vvedite vtoroe chislo: ";
			cin >> b;
			cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
			 cin >> count;
 switch (count) // ������ ��������� switch
 {

case 1: // ���� count = 1
 {
	 cout<<"vremenno nedostupno"<<endl;
 break;
 }
 case 2: // ���� count = 2
 {
	 cout<<"vremenno nedostupno"<<endl;
 break;
 }
 case 3: // ���� count = 3
 {
	 cout<<"vremenno nedostupno"<<endl;
 break;
 }
 case 4: // ���� count = 4
 {
	 cout<<"vremenno nedostupno"<<endl;
 break;
 }
 default: // ���� count ����� ������ ������� ��������
 cout << "Nepravilni vvod" << endl;
 }
 system("pause");
return 0;
 }
