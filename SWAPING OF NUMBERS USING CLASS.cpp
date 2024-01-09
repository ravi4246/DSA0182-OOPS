#include <iostream>
using namespace std;

class SwapNumbers {
  public:
    void swap(int &num1, int &num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    SwapNumbers s;
    s.swap(num1, num2);
    cout << "After swapping, num1 is " << num1 << " and num2 is " << num2;
    return 0;
}

