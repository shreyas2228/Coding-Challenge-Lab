#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	ifstream file("times.txt");
	if (!file) return 1;

	string line;
	while (getline(file, line)) {                  
		double totalMinutes = 0;
		string token;
		stringstream ss(line);

		while (getline(ss, token, ',')) {          
			int h = 0;
			double m = 0;
			if (sscanf(token.c_str(), "%d:%lf", &h, &m) == 2)
				totalMinutes += h * 60 + m;
		}

		int hours = (int)(totalMinutes / 60);
		int minutes = (int)round(totalMinutes - hours * 60);
		if (minutes == 60) { hours++; minutes = 0; }

		int roundedHours = hours + (minutes >= 30);
		cout << hours << " hours " << minutes << " minutes" << '\n';
		cout << "totalHours = " << roundedHours << '\n';
	}
}
