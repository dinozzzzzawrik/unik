#include <iostream>

using namespace std;

int main() {
    double x, y;
    cout << "Введіть перше число: ";
    cin >> x;
    cout << "Введіть друге число: ";
    cin >> y;

    double sum = x + y;
    double diff = x - y;

    cout << "Сума: " << sum << endl;
    cout << "Різниця: " << diff << endl;

    return 0;
}
