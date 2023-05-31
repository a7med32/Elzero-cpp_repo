#include <iostream>
#include <limits.h>
using namespace std;

/**
 * this is a homework file :) ° ͜ʖ ͡°
 */

int main()
{

    // int num = 3;
    // cout << num + num << "\n";                 // 6
    // cout << num * num - num << "\n";           // 6
    // cout << (num * num) - num << "\n";         // 6
    // cout << (num - num + num) + num << "\n";   // 6
    // cout << (num / num) * (num + num) << "\n"; // 6
    // cout << (num + num) + (num - num) << "\n"; // 6
    // cout << (num % num) + (num  + num) << "\n"; // 6
    // cout << 10 * 20 * 15 * 3 * 190 * 10 % 400 << endl; // 0
    // Do Not Edit
    // int num = 3;

    // num += 3;

    // Do Not Edit
    // cout << num << "\n";                                // 6
    // cout << (int(10.5) * 5) + int(40.5 + 10.1) << "\n"; // 100
    // // Assign The Values
    // char a = 0;
    // char b = 20;
    // char c = 50;
    // cout << a << endl << b << endl <<c<<endl;
    // cout<< "===================================";
    // // Do Not Edit
    // cout << b * c + a << "\n"; // 1000
    /*
      We Need To Use This Operators In Solutions
      - &&
      - >=
      - <=
      - >
      - <
      - ==
      - !
      - ||
    */

    // int a = 10;
    // int b = 25;
    // int c = 15;
    // cout << "=========================\n";
    // cout << (a <= b) << "\n";          // True
    // cout << (c > a) << "\n";          // True
    // cout << (a + c == b) << "\n";     // True
    // cout << !(c < a) << "\n";         // True
    // cout << (c || b) << "\n";         // True
    // cout << (b >= a && b > c) << "\n"; // True
    // cout << !(a >= b) << "\n";         // True
    // cout << (a < b || b > a) << "\n"; // True
    cout << "======================\n";

    int a = 10;
    int b = 20;

    cout << a + b * a + b + a * a * a << "\n"; // 10000

    cout << ((10 + 20) * 10) + (20 + 10) * 10 * 10 << "\n"; // 10000
    cout << ((a + b) * (a + b) + (a * a)) * a << "\n";
    //  Hint For Help
    // cout << 10 + 5 * 20 << "\n";   5 * 20 = 100 + 10 = 110
    // cout << (10 + 5) * 20 << "\n"; 10 + 5 = 15 * 20 = 300
    int num = 10;
    cout << --num << " | " << num++ << " | " << ++num << "\n"; // 9 | 9 | 11
    cout << num++ << " | " << num++ << " | " << --num << "\n"; // 11 | 12 | 12
    cout << --num << " | " << --num << " | " << --num << "\n"; // 11 | 10 | 9
    return 0;
}
