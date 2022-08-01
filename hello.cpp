# include <iostream> //the standrd library for output and input streams:-
# include <bits/stdc++.h> //the public library contains all libraries:-
# include <string> //the string library:-
# include <iomanip> //formatting library:-
# include <cmath> //math library:-

/*
(notes)
1) (cout) > character output.
2) (<<) > insertion operator.
3) the statement begin with (using) called using declarations.
4) when we use the public library we don't have to use any library.
5) c++ is a case sensitive language like java.
6) decltype(P) 
   func. is used to declare new variable with the same value of parameter
   and with the same type.
7) (end1) > manipulator.
8) if there is one statement in if statetment don't use braces.
9) true on the console = 1 and false on the console = 0.
10) setprecision func. should be written before the variable.
*/

using namespace std; //namespace std > standard library:-

int main(){ //main function (entry point of program):-
    cout << "hello world!" << endl; //print statement with a newline:-
    cout << "Welcome to c++!"; //without newline:-

    //DataTypes:-
    int  a = 10;
    signed int b = 10 , c = -10; //store positive and negative numbers:-
    unsigned int d = 10; //store positive numbers only:-
    short e = 10;
    short int f = 10; //as short type:-
    signed char g = 10; //store integers as byte in java:-
    long h = 10;
    long int i = 10; //as long type:-
    long long j = 10;
    long long int k = 10; //as long long type:-
    float l = 10.0;
    double m = 10.0;
    long double n = 10.0;
    bool o = true;
    decltype(nullptr); //null pointer:-
    void *p = nullptr; //no data stored:-
    char q = '10';
    char16_t r = '10';
    char32_t s = '10';
    wchar_t t = '10'; //store unlimited characters:-
    string u = "C++";
    
    //intialization forms (for all data types):-
    int v = 10;
    int w (10);
    int x {10};

    //Take input from the user:-
    int y = 0;
    cin >> y;

    //if else if statemnt:-
    if (a == b) {
        cout << "a equals b";
    }
    else if (a != c) {
        cout << "a not equals c";
    }
    else {
        cout << "not any condition true";
    }

    //swaping trick in c++:-
    a = a ^ b;
    b = a ^ b;
    cout << a << b;

    return 0; //end of the program:-
}