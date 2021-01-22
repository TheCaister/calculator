#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

enum Functions {
	Add, Subtract, Multiply, Divide, ERROR
};

float add(float first, float second) {
	return first + second;
}

float subtract(float first, float second) {
	return first - second;
}

float multiply(float first, float second) {
	return first * second;
}

float divide(float first, float second) {
	return first / second;
}

void calculator(Functions chosenOperation, float first, float second) {
	switch (chosenOperation) {
	case Add:
		cout << first << " + " << second << " = " << add(first, second) << endl;
		return;
	case Subtract:
		cout << first << " - " << second << " = " << subtract(first, second) << endl;
		return;
	case Multiply:
		cout << first << " * " << second << " = " << multiply(first, second) << endl;
		return;
	case Divide:
		cout << first << " / " << second << " = " << divide(first, second) << endl;
		return;
	case ERROR:
		cout << "Error!" << endl;
	}
}

Functions chooseOperation(int operation) {
	switch (operation) {
	case 0:
		return Add;
	case 1:
		return Subtract;
	case 2:
		return Multiply;
	case 3:
		return Divide;
	}
	return ERROR;
}

int main() {
	Functions input;
	int function, chooseContinue;
	float firstArg, secondArg;
	bool continuation = true;
	
	while (continuation) {
		cout << "Enter desired operation. 0=ADD, 1=SUB, 2=MUL, 3=DIV: " << endl;
		cin >> function;
		input = chooseOperation(function);

		cout << "Choose your first operand: " << endl;
		cin >> firstArg;

		cout << "Choose your second operand: " << endl;
		cin >> secondArg;

		calculator(input, firstArg, secondArg);

		cout << "Enter another calculation? 1=YES, 0=NO: " << endl;
		cin >> chooseContinue;
		if (chooseContinue != 1) {
			continuation = false;
		}
	}
	
	cout << "Thanks for using me! See you again!" << endl;

	system("pause");
}