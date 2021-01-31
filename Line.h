#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#define CLEEN system("cls");

class Line
{
public:
	static auto writeFile(const int& value,const string& link);
	static auto reedFile(const string& link);
	const string& getLink() const;
private:
	string link;
};

inline auto Line::writeFile(const int& value,const string& link)
{
	ofstream out(link, ios_base::binary | ios_base::app);
	if (!out)
	{
		cerr << "Error opening" << endl;
		return;
	}
	//out << value << endl; // raw value
	out.write((char*)&value, sizeof(int));
	out.close();
}

inline auto Line::reedFile(const string& link)
{
	CLEEN;
	int value;
	ifstream in(link, ios_base::binary);
	if (!in)
	{
		cerr << "error reeding" << endl;
	}
	in.read(reinterpret_cast<char*>(&value), sizeof(int));
	return value;

}

inline const string& Line::getLink() const
{
	return link;
}