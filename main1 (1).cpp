#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> S; 
    int count = 0;   

    S.push("mint");
    S.push("basil");
    S.push("parsley");

        stack<string> tempStack;

    while (!S.empty()) {
        string str = S.top(); 
        count += str.length(); 
        cout << str << endl; 
        
        tempStack.push(str);  
        S.pop();              
    }

    while (!tempStack.empty()) {
        S.push(tempStack.top());
        tempStack.pop();
    }

    cout << "Загальна кількість символів: " << count << endl;
    
    return 0;
}