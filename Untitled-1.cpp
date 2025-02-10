#include <iostream> 
#include <cmath> 
 
using namespace std; 
 
int factorial(int n) { 
    int result = 1; 
    for (int i = 1; i <= n; i++) { 
        result *= i; 
    } 
    return result; 
} 
 
bool isPrime(int n) { 
    if (n <= 1) return false; 
    for (int i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) return false; 
    } 
    return true; 
} 
 
int main() { 
    int choice, num; 
 
    while (true) { 
        cout << "\nMenu:\n"; 
        cout << "1. Calculate Factorial\n"; 
        cout << "2. Check Prime\n"; 
        cout << "3. Exit\n"; 
        cout << "Enter your choice: "; 
        cin >> choice; 
 
        switch (choice) { 
            case 1: 
                cout << "Enter a number: "; 
                cin >> num; 
                cout << "Factorial of " << num << " is " << factorial(num) << endl; 
                break; 
            case 2: 
                cout << "Enter a number: "; 
                cin >> num; 
                if (isPrime(num)) 
                    cout << num << " is a prime number.\n"; 
                else 
                    cout << num << " is not a prime number.\n"; 
                break; 
            case 3: 
                cout << "Exiting...\n"; 
                return 0; 
            default: 
                cout << "Invalid choice, please try again.\n"; 
        } 
    } 
 
    return 0; 
}