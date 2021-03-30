#include <iostream>
#include <string>

using namespace std;

int main() {

    //Initialize the variable's name & age
    string name;
    int age;

    //Prompt user for name
    cout << "Hello, may I have your name please?" << endl;
    getline (cin, name);
    cout << endl;


    //Prompt user for their age
    cout << "And also, how old are you?" << endl;
    cin >> age;
    cout << endl;

    //Return the information
    cout << "Nice to meet you " << name << "! I understand you are " << age << " years old." << endl;
    cout << "You may leave by entering a number and pressing enter, Goodbye.";
    cin >> age;

    return 0;

}