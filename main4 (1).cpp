#include <iostream>
#include <stack>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    stack<int> S;
    const int size = 10;
    int sum = 0;
    int count = 0;

    srand(time(0));

    for (int i = 0; i < size; i++) {
        int randomNum = 1 + rand() % 40; 
        S.push(randomNum);
    }

    cout << "Елементи стека (випадкові числа від 1 до 40): " << endl;
    while (!S.empty()) {
        int num = S.top();
        S.pop();

        cout << num << " ";

        if (num % 9 == 0) {
            sum += num;
            count++;
        }
    }
    cout << endl;

    if (count > 0) {
        cout << "Середнє значення відібраних чисел (кратних 9): " << double(sum) / count << endl;
    } else {
        cout << "Чисел, що відповідають критерію (кратних 9), у стеку не знайдено." << endl;
    }

    return 0;
}