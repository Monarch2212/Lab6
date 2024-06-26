#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int multiplyNumbers() {
    int num1, num2;
    cin >> num1;
    cin >> num2;
    int product = num1 * num2;
    
    return product;
}
double calculateAcceleration() {
    double v1,  v2, t;
    cin >> v1 >> v2 >> t;
    if (t == 0) {
        cout << "Error: Time cannot be zero." << endl;
        return 0; 
    }
    double a = (v2 - v1) / t;
    return a;
}
void circle(double radius) {
    double pi = 3.14;
    double circumference = 2 * pi * radius;
    double area = pi * radius * radius;
    cout << circumference << endl;
    cout << area << endl;
}
void swapIntegers(int a, int b) {
    a = a + b; 
    b = a - b; 
    a = a - b;
    cout << a << " " << b << endl;
}
int Factorial(int n = 1) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return gcd(num2, num1 % num2);
}
void findMaxMin(int num1, int num2, int num3) {
    int maxNum = max(num1, max(num2, num3));
    int minNum = min(num1, min(num2, num3));
    cout << "Maximum: " << maxNum << endl;
    cout << "Minimum: " << minNum << endl;
}
double sum(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double product(double num1, double num2) {
    return num1 * num2;
}

double division(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero not allowed" << endl;
        return 0;
    }
}
int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}
void displayEven(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            cout << digit << " ";
        }
        number = number / 10;
    }
    cout << endl;
}
int cubeOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, 3);
        number /= 10;
    }
    return sum;
}

void isArmstrong(int sum, int number) {
    if (sum == number) {
        cout << number << " is an Armstrong integer." << endl;
    } else {
        cout << number << " is not an Armstrong integer." << endl;
    }
}
int numberOfDaysInFebruary(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 29;
    } else {
        return 28;
    }
}

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
    double futureValue = investmentAmount * pow((1 + monthlyInterestRate), years * 12);
    return futureValue;
}
void printASCII(char ch1, char ch2, int numberPerLine) {
    int count = 0;
    for (int i = ch1; i <= ch2; ++i) {
        cout << static_cast<char>(i) << " - " << i << "\t";
        count++;
        if (count % numberPerLine == 0) {
            cout << endl;
        }
    }
}
void printMatrix(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << rand() % 1001 << " ";
        }
        cout << endl;
    }
}
bool Palindrome(int num) {
    int reversed = 0, original = num, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}
void displayEvenPalindromes(int limit) {
    int num = 2; 
    int count = 0;

    while (count < limit) {
        if (num % 2 == 0 && Palindrome(num)) {
            cout << setw(5) << num;
            count++;
            if (count % 5 == 0) 
                cout << endl;
        }
        num++;
    }
}
void displaySortedNumber(double a, double b, double c) {
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c); 
    
    cout << a << "," << b << "," << c << endl;
}
string convertMillis(long millis) {
    auto totalSeconds = millis / 1000; 
    auto seconds = totalSeconds % 60; 
    auto totalMinutes = totalSeconds / 60; 
    auto minutes = totalMinutes % 60; 
    auto hours = totalMinutes / 60;

    string timeFormatted = to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
    
    return timeFormatted;
}
double area(int n, double side) {
    double pi = 3.14159;
    return (n * side * side) / (4 * tan(pi / n));
}
int rollDice() {
    return rand() % 6 + 1;
}
int main() {
    cout << "PROBLEM 1\n";
    int result = multiplyNumbers();
    cout << result << endl;
    cout << "PROBLEM 2\n";
    double acceleration = calculateAcceleration();
    cout << acceleration << endl;
    cout << "PROBLEM 3\n";
    double radius;
    cin >> radius;
    circle(radius);
    cout << "PROBLEM 5\n";
    int x, y;
    cin >> x >> y;
    swapIntegers(x, y);
    cout << "PROBLEM 6\n";
    cout << Factorial() << endl;
    cout << "PROBLEM 7\n";
    int num1, num2;
    cin >> num1 >> num2;
    int result1 = gcd(num1, num2);
    cout << result1 << endl;
    cout << "PROBLEM 8\n";
    int num3, num4, num5;
    cin >> num3 >> num4 >> num5;
    findMaxMin(num3, num4, num5);
    cout << "PROBLEM 9\n";
    double number1, number2;
    cin >> number1;
    cin >> number2;
    cout << sum(number1, number2) << endl;
    cout << subtract(number1, number2) << endl;
    cout << product(number1, number2) << endl;
    cout << division(number1, number2) << endl;
    cout << "PROBLEM 10\n";
    for (int i = 1; i <= 75; ++i) {
        cout << getTriangularNumber(i) << " ";
        if (i % 5 == 0) {
            cout << endl;
        }
    }
    cout << "PROBLEM 11\n";
    int inputNumber;
    cin >> inputNumber;
    displayEven(inputNumber);
    cout << "PROBLEM 12\n";
    int number;
    cin >> number;
    int sum = cubeOfDigits(number);
    isArmstrong(sum, number);
    cout << "PROBLEM 13\n";
    for (int year = 1985; year <= 2023; year++) {
        cout << year << "\t" << numberOfDaysInFebruary(year) << endl;
    }
    cout << "PROBLEM 14\n";
    double investmentAmount, annualInterestRate;
    cin >> investmentAmount;
    cin >> annualInterestRate;

    double monthlyInterestRate = (annualInterestRate / 100) / 12;

    cout << "Years\tFuture Value" << endl;
    for (int years = 1; years <= 30; years++) {
        double futureValue = futureInvestmentValue(investmentAmount, monthlyInterestRate, years);
        cout << years << "\t$" << fixed << setprecision(2) << futureValue << endl;
    }
    cout << "PROBLEM 15\n";
    char startChar = 'a';
    char endChar = 'm';
    int numberPerLine = 6;
    printASCII(startChar, endChar, numberPerLine);
    cout << "PROBLEM 16\n";
    int n;
    cin >> n;
    srand(time(0));
    printMatrix(n);
    cout << "PROBLEM 17\n";
    displayEvenPalindromes(50);
    cout << "PROBLEM 19\n";
    double x1, y1, z1;
    cin >> x1 >> y1 >> z1;
    displaySortedNumber(x1, y1, z1);
    cout << "PROBLEM 20\n";
    long millis;
    cin >> millis; 
    string time = convertMillis(millis);
    cout << time << endl;
    cout << "PROBLEM 22\n";
    int m;
    double side;
    cout << "Enter the number of sides: ";
    cin >> m;
    cout << "Enter the side: ";
    cin >> side;

    double polygonArea = area(m, side);
    cout << "The area of the polygon is " << polygonArea << endl;
    cout << "PROBLEM 23\n";
    srand(0);

    int point = 0;
    int sum1 = 0;

    while (true) {
        int dice1 = rollDice();
        int dice2 = rollDice();
        sum1 = dice1 + dice2;

        cout << "You rolled " << dice1 << " + " << dice2 << " = " << sum1;

        if (sum1 == 7 || sum1 == 11) {
            cout << ". You win" << endl;
            break;
        } else if (sum1 == 2 || sum1 == 3 || sum1 == 12) {
            cout << ". You lose" << endl;
            break;
        } else {
            if (point == 0) {
                point = sum1;
                cout << ". Point is " << point << endl;
            } else {
                if (sum1 == point) {
                    cout << ". You win" << endl;
                    break;
                } else if (sum1 == 7) {
                    cout << ". You lose" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
