#include <iostream>
using namespace std;

class AddNumbers {
  public:
    int add(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    AddNumbers a;
    cout << "The sum of " << num1 << " and " << num2 << " is " << a.add(num1, num2);
    return 0;
}

