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
	int data1, data2, data3, data4;
	ifstream inFile;
	ofstream outFile;
	inFile.open("inMeanStd.dat");
	if (inFile.is_open())
	{
		while (inFile >> data1, data2, data3, data4);
	}
	else {
		cout << "ERROR" << endl;
	}
	outFile.open("outMeanStd.dat");
	cout << "This will calculate the mean and standard deviation of four user values" << endl;
	float A1, A2, A3, A4; //assigning values 
	float mean;
	float standardDeviation;
	float sd1, sd2, sd3, sd4, sd5, sd6, sd7, sd8;
	cout << "Please enter your first number: ";
	cin >> A1;
	cout << "Please enter your second number ";
	cin >> A2;
	cout << "Please enter your third number ";
	cin >> A3;
	cout << "Please enter your fourth number ";
	cin >> A4;
	mean = ((A1 + A2 + A3 + A4 + data1 + data2 + data3 + data4) / 8);
	// mean formula
	sd1 = ((A1 - mean) *= (A1 - mean));
	sd2 = ((A2 - mean) *= (A2 - mean));
	sd3 = ((A3 - mean) *= (A3 - mean));
	sd4 = ((A4 - mean) *= (A4 - mean));
	sd5 = ((data1 - mean) *= (data1 - mean));
	sd6 = ((data2 - mean) *= (data2 - mean));
	sd7 = ((data3 - mean) *= (data3 - mean));
	sd8 = ((data4 - mean) *= (data4 - mean));
	standardDeviation = ((sd1 + sd2 + sd3 + sd4 + sd5 + sd6 + sd7 + sd8) / 8);
	// standard deviation equation
	cout << "\nYour mean is: " << mean << endl;
	cout << "\nYour standard deviation is: " << standardDeviation << endl;
	outFile << "Your mean is:" << standardDeviation << endl;
	outFile << "your standard deviation is" << standardDeviation << endl;
	inFile.close();
	outFile.close();
	return 0;
}
