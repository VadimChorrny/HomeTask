#include <iostream>
#include "Line.h"

using namespace std;

#define HELLO cout << "Hello, world!" << endl;

int main()
{
	HELLO;
	int value = 0;
	cout << "Enter value : "; cin >> value;
	Line line;
	line.writeFile(value,"C:\\Users\\vadim_oyanwuw\\source\\repos\\Binary_Files_HM\\Binary_Files_HM\\test.txt");
	line.reedFile("C:\\Users\\vadim_oyanwuw\\source\\repos\\Binary_Files_HM\\Binary_Files_HM\\test.txt"); // change link
}