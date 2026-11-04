

#include <iostream>

using namespace std;
void displayStudentInfo()
{
	int studentID;
	cout << "Vuvedete studentID";
	cin >> studentID;
	float score;
	cout << "Vuvedete score";
	cin >> score;
	cout << "Vuvedete grade";
	char grade;
	cin >> grade;
	cout << "Student" << studentID << "sus " << score << "ocenka" << grade << "\n";
}
int main()
{
   //Задача 1:Създаване на справка за студент
	displayStudentInfo();
		

}

