#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Введіть коефіцієнт a: ";
    cin >> a;
    cout << "Введіть коефіцієнт b: ";
    cin >> b;
    cout << "Введіть коефіцієнт c: ";
    cin >> c;

    // Обчислення дискримінанту
    double discriminant = b * b - 4 * a * c;

    // Перевірка наявності дійсних коренів
    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Рівняння має два дійсних корені: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "Рівняння має один дійсний корінь: x = " << x << endl;
    } else {
        cout << "Рівняння не має дійсних коренів" << endl;
    }

    return 0;
}
