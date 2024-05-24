#pragma once
#include <string>
#include <iostream>
using namespace std;
class Weather
{
	std::string city; //  �����
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	std::string weather; // �����
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(string c, double l, double l1, double t, string w, double ws, int cl);
	ostream& operator<<(std::ostream& os);
};

