#include <iostream>
#include <string>

using namespace std;
 
int main () {
	string student_name;
	int age;
	double exam_score;
	
	cout << "=== Ruiru College Admission System ===" << endl;
	cout<<"Enter student name: "<<endl;
	cin>>student_name;
	
	cout<<"Enter Student Age: "<<endl;
	cin>>age;
	
	cout<<"Enter Exam Score: "<<endl;
	cin>>exam_score;
	
	cout << "\n----------------------------------------" << endl;
    cout << "student name: " << student_name <<endl;
	
	if (age >=18) {
		
		if(exam_score >= 50) {
			cout<<"Admission status: Admitted"<<endl;
		}else {
			cout<<"Admission status: Not Admitted:low score "<<endl;
		}
		
	}else{
		cout<<"Admission status: Not Admitted:underage "<<endl;
	}
	cout << "----------------------------------------" << endl;
	return 0;
}