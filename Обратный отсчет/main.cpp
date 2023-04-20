#include <iostream> 
#include <cmath>

using namespace std;
int main() {
int n = 0;
cin >> n;
while (n > 0) {
     cout << n << endl;
     if (n % 5 == 0) {
           cout << "Beep" << endl;
     }
    n = n - 1;
}

}