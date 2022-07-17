#include <iostream>
using namespace std;

class Person{
public:
	char name[30];
	int age;
private:
	int hand = 2;
	int fingers = 10;

public:
	void getData(){
		cout<<"Enter Name : ";
		cin>>name;

		cout<<"Enter Age : ";
		cin>>age;
	}

	void showData();
};

// declared outside of the class
	void Person::showData(){
		cout<<"Name : "<<name<<endl;
		cout<<"Age  : "<<age<<endl;
		cout<<"Fingers : "<<fingers<<endl;
		cout<<"Hand : "<<hand<<endl;
	}


int main(){

	Person p;
	p.getData();
	p.showData();

	return 0;
}