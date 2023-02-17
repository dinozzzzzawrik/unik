#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Введіть вік: ";
    cin >> age;

    if (age % 10 == 1 && age % 100 != 11) {
        cout << age << " рік" << endl;
    } else if (age % 10 >= 2 && age % 10 <= 4 && (age % 100 < 10 || age % 100 >= 20)) {
        cout << age << " роки" << endl;
    } else {
        cout << age << " років" << endl;
    }

    return 0;
}
