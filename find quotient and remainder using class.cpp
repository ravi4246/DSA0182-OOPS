#include <iostream>
using namespace std;

class QuotientRemainder {
  public:
    void find(int dividend, int divisor) {
        int quotient = dividend / divisor;
        int remainder = dividend % divisor;
        cout << "The quotient is " << quotient << endl;
        cout << "The remainder is " << remainder;
    }
};

int main() {
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    QuotientRemainder q;
    q.find(dividend, divisor);
    return 0;
}
