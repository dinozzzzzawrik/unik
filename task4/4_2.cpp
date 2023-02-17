#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Введіть довжину сторони a: ";
    cin >> a;
    cout << "Введіть довжину сторони b: ";
    cin >> b;
    cout << "Введіть довжину сторони c: ";
    cin >> c;

    // Перевірка чи існує трикутник з такими сторонами
    if (a + b > c && a + c > b && b + c > a) {
        // Обчислення кутів за теоремою косинусів
        double cosA = (b * b + c * c - a * a) / (2 * b * c);
        double cosB = (a * a + c * c - b * b) / (2 * a * c);
        double cosC = (a * a + b * b - c * c) / (2 * a * b);

        // Перевірка типу трикутника за кутами
        if (cosA > 0 && cosB > 0 && cosC > 0) {
            cout << "Трикутник є гострокутним" << endl;
        } else if (cosA == 0  cosB == 0  cosC == 0) {
            cout << "Трикутник є прямокутним" << endl;
        } else {
            cout << "Трикутник є тупокутним" << endl;
        }
    } else {
        cout << "Трикутник з такими сторонами не існує" << endl;
    }

    return 0;
}
