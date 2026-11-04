#include <iostream>
#include <fstream>
using namespace std;

class Student {
    char name[30];
    int age;
    char sex;
    float height;
    float weight;

public:
    void readData() {
        cout << "Enter the name: ";
        cin.getline(name, 30);
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter M for male and F for female: ";
        cin >> sex;
        cout << "Enter the height: ";
        cin >> height;
        cout << "Enter the weight: ";
        cin >> weight;
    }

    void show() {
        cout << endl << "The student details are:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Sex: " << sex << endl;
        cout << "Height: " << height << endl;
        cout << "Weight: " << weight << endl;
    }
};

int main() {
    Student s1;
    s1.readData();
    s1.show();

    ofstream out("student.dat", ios::binary);
    out.write((char*)&s1, sizeof(s1));
    out.close();

    ifstream in("student.dat", ios::binary);
    Student t;
    in.read((char*)&t, sizeof(t));
    t.show();
    in.close();
}
