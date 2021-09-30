/*
Evan Paivarinta
C++ Fall 2021
Due: September 29th 2021
Lab 3: User and File I/O
Outputting data to the screen
*/
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
	string str;
	string inputFileName = "C:/Users/Engineering/Source/repos/Evan Paivarinta Lab 3/inMeanStd.dat";
	string outputFileName = "outMeanStd.dat";
	int value1, value2, value3, value4;
	ifstream inFile;
	ofstream outFile;
	inFile.open("inMeanStd.dat");
	outFile.open("outMeanStd.dat");
	inFile >> value1 >> value2 >> value3 >> value4;
	outFile << value1 << value2 << value3 << value4;
	cout << "This will calculate the mean and standard deviation of four user values" << endl;
	float A1, A2, A3, A4; //assigning values 
	float mean; 
	float standardDeviation;
	cout << "Please enter your first number: ";
	cin >> A1;
	cout << "Please enter your second number ";
	cin >> A2;
	cout << "Please enter your third number ";
	cin >> A3;
	cout << "Please enter your fourth number ";
	cin >> A4;
	mean = ((A1 + A2 + A3 + A4 + value1 + value2 + value3 + value4) / 8);
	// mean formula
	standardDeviation = (((A1 - mean) * (A1 - mean)) + ((A2 - mean) * (A2 - mean)) + ((A3 - mean) * (A3 - mean)) + ((A4 - mean) * (A4 - mean)) + ((value1 - mean) * (value1 - mean)) + ((value2 - mean) * (value2 - mean)) + ((value3 - mean) * (value3 - mean)) + ((value4 - mean) * (value4 - mean)) / 8);
	// standard deviation equation
	cout << "\nYour mean is: " << mean << endl;
	cout << "\nYour standard deviation is: " << standardDeviation << endl;
	outFile << "Your mean is:" << standardDeviation << endl;
	outFile << "your standard deviation is" << standardDeviation << endl;
	inFile.close();
	outFile.close();
	return 0;
}
