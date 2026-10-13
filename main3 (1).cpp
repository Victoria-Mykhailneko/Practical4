#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> S; 
    int count = 0; 
    int foundCount = 0; 
    
    S.push(13);
    S.push(26);
    S.push(39);
    S.push(52);
    S.push(65);
    S.push(78);

    int findNum;
    cout << "Введіть число для пошуку: ";
    cin >> findNum;
    
    cout << "Витягнуті елементи з стека: ";
    while (!S.empty()) {
        int num = S.top(); 
        S.pop(); 
        cout << num << " "; 
        count++; 

        if (num == findNum) {
            foundCount++; 
        }
    }
    cout << endl;

    if (foundCount > 0) {
        cout << "Число " << findNum << " знайдено " << foundCount << " раз(и)!" << endl;[cite: 8]
    } else {
        cout << "Число " << findNum << " не знайдено." << endl;[cite: 8]
    }
    
    cout << "Кількість витягнутих елементів: " << count << endl;[cite: 8]

    return 0;
}