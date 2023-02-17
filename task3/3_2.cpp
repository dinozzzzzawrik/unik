#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "Введіть координати першої точки (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Введіть координати другої точки (x2, y2): ";
    cin >> x2 >> y2;

    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << "Перша точка: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Друга точка: (" << x2 << ", " << y2 << ")" << endl;
    cout << "Відстань між ними: " << distance << endl;

    return 0;
}
