#include <iostream>
#include <string>
#include "Person.cpp"

using namespace std;

int main(){

    Person bob;
    Person tom("Tom", "M", "stupid");
    Person p3("Susan", "F", "Pretty");
    Person myPeople[10];

    // bob.setName("Bob");
    // bob.setGender("Male");
    // bob.setAge(42);
    // bob.setRace("obnoxious");
    // bob.setAlive(true);

    // cout << "Name: " << bob.getName() << endl;
    // cout << "Age: " << bob.getAge() << endl;
    // cout << "Alive? " << bob.getAlive() << endl;

    // bob.setName("Bob");
    // bob.setGender("Male");
    // bob.setAge(42);
    // bob.setRace("obnoxious");
    // bob.setAlive(true);

    cout << bob.getStats() << endl;
    cout << "   Age: " << bob.getAge() << endl;
    cout << tom.getStats() << endl;
    cout << "   Age: " << tom.getAge() << endl;
    cout << p3.getStats() << endl;
    cout << "   Age: " << p3.getAge() << endl;

    bob.setName("Bob");
	bob.setAge(1000);
	cout << "   Age: " << bob.getAge() << endl;
	bob.setRace("Obnoxious");
	bob.setAlive(true);
	bob.setGender("Male");

    // bob.setAlive(true);cout << "Name: " << bob.getName() << endl;
    // cout << "Age: " << bob.getAge() << endl;
    // cout << "Alive? " << bob.getAlive() << endl;
}