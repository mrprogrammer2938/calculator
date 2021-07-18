// v1.2
#include <iostream>
#include <string>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>
using namespace std;
void cls() {
    system("clear");
}
void ext() {
    cls();
    cout<<"\nExiting..."<<endl;
}
void run() {
    cls();
    int number1,number2;
    string inp;
    cout<<"--[ calculator ]--"<<endl;
    cout<<"\nEnter number1: ";
    cin>>number1;
    sleep(1);
    cout<<"\nEnter number2: ";
    cin>>number2;
    cout<<"----------"<<endl;
    cout<<"\nEnter(+ - * / ): ";
    cin>>inp;
    if (inp == "+") {
        int number3;
        number3 = number1+number2;
        cout<<number3<<endl;
    } else if(inp == "-") {
        int number3 = number1-number2;
        cout<<number3<<endl;
    } else if(inp == "*") {
        int number3 = number1*number2;
        cout<<number3<<endl;
    } else if(inp == "/") {
        int number3 = number1/number2;
        cout<<number3<<endl;
    } else {
        cout<<"\nPlease, Enter operator ;| "<<endl;
    }
}
void try1() {
    string try_to_menu;
    cout<<"\nDo you want to try again? [y/n] ";
    cin>>try_to_menu;
    if (try_to_menu == "y") {
        run();
    } else if (try_to_menu == "n") {
        ext();
    } else {
        try1();
    }
}
int main() {
    run();
    try1();
    return 0;
}
