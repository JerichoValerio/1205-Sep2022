#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define MAX_FILENAME_SIZE 128
#define COLUMN_WIDTH 80

void FileStreamTest1()
{
	// ofstream: file output stream
	ofstream fout1("TextFiles\\output4.txt");

	fout1 << "Output1: my test in 1-1 ---- this is the first line.." << endl;
	fout1 << "O1: test in 1-2--- and this is the 2nd line.." << endl;

	fout1.close();
	// ifstream: file input stream

	ofstream fout2("TextFiles/output5.txt");

	fout2 << "O2: test on 3 -1- this is the first line.." << endl;
	fout2 << "O2: test on 3 -2- and this is the 2nd line.." << endl;

	fout2.close();
}

void FileStreamTest2()
{
	int const filename_maxsize = 100;
	char filename[filename_maxsize];

	cout << "enter a filename and press ENTER:";
	cin.getline(filename, filename_maxsize);

	ofstream file_out(filename);

	if (!file_out) 
	{
		cout << "Filename: " << filename << " could not be opened" << endl;
		return;
	}

	cout << "Filename" << filename << " was opened." << endl;
	file_out << "I have created this file and this is the 1st line " << endl;
	file_out << "end" << endl;

	file_out.close();
}

void DisplayFile()
{
	int const filename_maxsize = 100;
	char filename[filename_maxsize];

	cout << "enter a filename to read and press ENTER:";
	cin.getline(filename, filename_maxsize);

	ifstream file_in(filename);

	if (!file_in)
	{
		cout << filename << " could not be opened " << endl;
		return;
	}

	string line;
	while (!file_in.eof())
	{
		getline(file_in, line);
		cout << line << endl;
	}
}
