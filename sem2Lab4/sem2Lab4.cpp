// sem2Lab4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stack> 

using namespace std;


void _tmain(int argc, _TCHAR* argv[])
{
	stack <char> stack1;
	stack <char> stack2;
		char mas[250];
		int k = 0;
		bool simmetr = true;

		puts("vvod stroki");
		gets_s(mas);

		k = strlen(mas);
		if (k==0){
			cout << "stroka pusta" << endl;
			system("pause");
			exit(0);
		}

		for (int i = 0; i < k; i++)
		{
			stack1.push(mas[i]);
		}

		if (stack1.top() == '.'){
			stack1.pop();
			k--;
		}

		for (int i = 0; i < k/2; i++){
			stack2.push(stack1.top());
			stack1.pop();
		}

		if (k % 2 != 0){
			stack1.pop();
		}


		for (int i = 0; i < k / 2; i++)
		{
			if (stack1.top() != stack2.top()){
				simmetr = false;
				break;
			}
			else
			{
			stack1.pop();
			stack2.pop();
			}
		}

		if (simmetr)
		{
			cout << "simmetr TRUE" << endl;
		}
		else
		{
			cout << "simmetr FALSE" << endl;
		}

		system("pause");
}

