#include <iostream>
using namespace std;


class Person{
public:
	int type = 123;
	static int coutNoObjects;
	Person(){
		coutNoObjects++;
	}

// static function can only use static variable
	static void showMe(){
		cout<<"No of Objects : "<<coutNoObjects;
//		cout<<"Type : "<<type; // show error
	}
};


// static variables are defined outside of the class
// because it is not a part of the object
int Person::coutNoObjects = 0; // default is 0

int main(){

	Person p1;
	Person p2,p3,p4,p5;

	// this the way to call static function
	Person::showMe();

	//	cout<<"Object Cout : "<<p2.coutNoObjects;

	return 0;
}