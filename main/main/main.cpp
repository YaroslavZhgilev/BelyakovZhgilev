// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "function1.h"
using namespace std;

int main(int argc, char* argv[])
	{
		 int count; // переменная для выбора в switch
		 double a, b; // переменные для хранения операндов
			cout << "Vvedite pervoe chislo: "<<endl;
			cin >> a;
			cout << "Vvedite vtoroe chislo: "<<endl;
			cin >> b;
			cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: "<<endl;
			 cin >> count;
 switch (count) // начало оператора switch
 {

case 1: // если count = 1
 {
	 cout<<funcadd(a,b)<<endl;
 break;
 }
 case 2: // если count = 2
 {
	 cout<<funcsub(a,b)<<endl;
 break;
 }
 case 3: // если count = 3
 {
	 cout<<funcmulti(a,b)<<endl;
 break;
 }
 case 4: // если count = 4
 {
	 cout<<funcdiv(a,b)<<endl;
 break;
 }
 default: // если count равно любому другому значению
 cout << "Nepravilni vvod" << endl;
 }
 system("pause");
return 0;
 }
