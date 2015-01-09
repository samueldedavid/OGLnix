//============================================================================
// Name        : FileIO.cpp
// Author      : Fady
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <fstream>
#include <iostream>
using namespace std;

int main() {
	char data[100];
	string s;
	fstream op;
	op.open("test.txt",ios::app|ios::out);
	op<<"asdfsf\n";
	op << "!!!Hello /Graphics.h!!\n" ; // prints !!!Hello /Graphics.h!!
	ifstream ip;
	ip.open("SimpleFragmentShader.fragmentshader");
	if (ip.is_open()) {
		while(getline(ip,s)){

			op<<s;
			cout<<s<<endl;
		}
	}
	ip.close();
	op.close();
	const char *p=s.c_str();

	cout<<p;
	return 0;
}
