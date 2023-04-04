#include <iostream>
using namespace std;
class Student {
public:
	string StuName, StuSur, StuID;
	void DisplayInformation();
};
void Student::DisplayInformation() {
	cout << "Name : " << StuName << endl << "Surname : " << StuSur << endl << "ID : " << StuID << endl;
}
