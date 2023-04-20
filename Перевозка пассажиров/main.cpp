#include <iostream> 
#include <cmath>

using namespace std;
int main() {
   int x;
   cout << "Введите количество пассажиров " << endl;
   cin>>x;
   cout<< "Пустые места: ";
   if (x>50) {
       cout<<(50-(x%50))<<endl;
    } else {
       cout<<(50-x)<<endl;
    }
    return 0;
}