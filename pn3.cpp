#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;

public:
    int age;
    void setName(string n) { name = n; }
    string getName() { return name; }
};

int main() {
    Person people[5];
    int totalAge = 0;
    string inputName;

    for (int i = 0; i < 5; ++i) {
        cin >> inputName >> people[i].age;
        people[i].setName(inputName);
        totalAge += people[i].age;
    }

    double averageAge = totalAge / 5.0;
    cout << "Average age is: " << averageAge << endl;

    return 0;
}

