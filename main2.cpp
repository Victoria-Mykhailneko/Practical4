#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> S;
    int sum = 0;  
    
    S.push(7);
    S.push(8);
    S.push(9);
    S.push(10);
    S.push(11);

        cout << "Елементи стека: ";
    while (!S.empty()) {
        int num = S.top();    
        cout << num << " ";   
        sum += num;           
        S.pop();              
    }

    cout << "\nСума чисел: " << sum << endl;

    return 0;
}