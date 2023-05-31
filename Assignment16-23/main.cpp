#include <iostream>
#include <limits.h>
using namespace std;
//--------NOTES--------
// to make a number in an mathe opreation be flaot put an f after it if you don't it will be double and that effect performance
// num = 20.5f

int main() {
    int numbyts;

    // double salary =5000.98;
    // cout << sizeof(salary) <<": Bytes\n";
    // cout << sizeof(salary) * 8 <<": Bits\n";
    cout<< "Maximum Integer Number Is => " <<INT_MAX <<endl;
    cout<< "Minimum Integer Number Is => "<<INT_MIN <<endl;
    cout<< "Maximum Short Integer Number Is => "<<SHRT_MAX <<endl;
    cout<< "Maximum Short Integer Number Is => "<< SHRT_MIN <<endl;
    // cout<<"enter num:  "; 
    // cin >>numbyts;
    // cout<< "["<< numbyts << "]The Number of Kilobytes That User Input\n";
    // cout<< "["<< numbyts* 1024 << "]The Number of bytes That User Input\n";
    // cout<< "["<< numbyts *1024 * 8 << "]The Number of bits That User Input\n";
    // cout<< sizeof(int);
    // Edit Line To Make 8 Become 4
// cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 8 =>> 4
// char a = '~';
// char b = '&';
// char c = '%';
// // char d = 'A';
// cout << "ASCII Value of ~ Is "<< int(a)<<endl;
// cout << "ASCII Value of & Is "<< int(b)<<endl;
// cout << "ASCII Value of % Is "<< int(c)<<endl;
// cout << "ASCII Value of A Is "<< int(d)<<endl;
// // // Output Needed
// "ASCII Value of ~ Is 126"
// "ASCII Value of & Is 38"
// "ASCII Value of % Is 37"
// "ASCII Value of A Is 65"
// //print "EWS" 69 87 83
// int a = 1;
// int b = 13;
// int c = 17;
// int d = 70;
cout << "-------------------------------\n";
// cout << char(d-a)<<char(d+c)<<char(d+b);
// Output Needed

// Edit Anything Except Values
// // Edit Anything Except Values
// unsigned int a = 100;
// int b = -100;
// short c = 100;
// float d = 500.55;

// // Do Not Edit
// cout << a << "\n"; // 100
// cout << b << "\n"; // -100
// cout << c << "\n"; // 100
// cout << d << "\n"; // 500.55
// cout <<sizeof(c);
// // Do Not c
// Do Not Edit Here
short a = 1000;
int b = 10000;
long double c = 5.560000505012;
cout<< "========================================\n";
// Change ??? To Something Else To Get The Output
cout << sizeof(c) - sizeof(b) << "\n"; // 12
cout << sizeof(c) + sizeof(b) << "\n"; // 20
cout << sizeof(c) * sizeof(a) << "\n"; // 32
cout << a * (int)c << "\n"; // 5000
cout << char( sizeof(c)* (int)c) << "\n"; // P 80  2 4 16 8 
cout << sizeof(long long int) << "\n"; // P 80  2 4 16 8 
cout << sizeof(long double) << "\n"; // P 80  2 4 16 8 
cout << sizeof(long double) << "\n"; // P 80  2 4 16 8 
cout << sizeof( double) << "\n"; // P 80  2 4 16 8 
cout << 12.00000 /5 ;


    return 0;
}