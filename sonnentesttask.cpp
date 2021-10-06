/* 

    Sonnen test task

    Author: Bruno Cedero

*/
#include <iostream>
#include <string>


using namespace std;

int setup1(int p, int c){

    int setpoint;
    setpoint = p - c;

    if (setpoint>0){
        cout << "The battery storage system will charge, value of setpoint:\n";
    }

    else if (setpoint<0){
        cout << "The battery storage system will discharge, value of setpoint:\n";
    }

    return setpoint;
}

int setup3(int p, int d){
    
    int sp;
    int c;
    c = d - p;
    sp = setup1(p, c);
    
    return sp;
}

int setup4(int p, int g){
    int c;
    c = rand() % 1000 + 1;
    int setpoint;
    setpoint = p + g - c;
    if (setpoint>0){
        cout << "The battery storage system will charge, value of setpoint:\n";
    }

    else if (setpoint<0){
        cout << "The battery storage system will discharge, value of setpoint:\n";
    }

    return setpoint;}

int main(){

//testing functions:
    int test1, test2, test3;

    test1 = setup1(2000,4000);
    cout << test1;
    cout << "\n";

    test2 = setup3(4000,6000);
    cout << test2;
    cout << "\n";

    test3 = setup4(9000,6000);    
    cout << test3;
    cout << "\n";

    return 0;
}