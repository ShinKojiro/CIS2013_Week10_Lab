#include <iostream>
#include <string>
#include "person.cpp"

using namespace std;

int main(){

    person bob;

    // bob.setName("Bob");
    // bob.setGender("Male");
    // bob.setAge(42);
    // bob.setRace("obnoxious");
    // bob.setAlive(true);

    cout << "Name: " << bob.getName() << endl;
    cout << "Age: " << bob.getAge() << endl;
    cout << "Alive? " << bob.getAlive() << endl;

    bob.setName("Bob");
    bob.setGender("Male");
    bob.setAge(42);
    bob.setRace("obnoxious");
    
    bob.setAlive(true);cout << "Name: " << bob.getName() << endl;
    cout << "Age: " << bob.getAge() << endl;
    cout << "Alive? " << bob.getAlive() << endl;
}