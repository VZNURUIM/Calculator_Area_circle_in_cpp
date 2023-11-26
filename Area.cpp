#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
	string response;
	double ray;

	cout << "Write: \ncm2\nm2\nkm2\nmm2\nResponse: ";
	cin >> response;
	
	cout << "\nWrite the ray: ";
	cin >> ray;
	
	double area_formula = (3.14159265359 * (pow(ray, 2.0)));

	cout << "\n\nArea: " << area_formula << " " << response << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	return 0;
}
