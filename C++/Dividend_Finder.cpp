//
//  main.cpp
//  CPP_Test
//
//  Created by Matthew Thornton on 6/6/19.
//  Copyright © 2019 Matthew Thornton. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int dividend_finder(){
    int dividend;
    int divisor = 1;
    int multiplyer = 1;
    int multiplyer_l;
    string stop_test;
    cout << "Enter a number or enter 'e' to return. ";
    cin >> stop_test;
    if (stop_test == "e"){
        return 0;
    }
    else{
        dividend = stoi(stop_test);
    }
    while (dividend != divisor){
        if (dividend%divisor == 0){
            multiplyer = dividend/divisor;
            cout << divisor << " x " << multiplyer << " = " << dividend << "\n";
            multiplyer_l = multiplyer;
            if (divisor == multiplyer_l){
                break;
            }
            
        }
        divisor++;
        if (divisor == multiplyer_l){
            break;
        }
    }
    return 0;
}

int main(){
    char choice;
    while (true){
        system("clear");
        dividend_finder();
        cout << "\nWould you like to run again? Y/N ";
        cin >> choice;
        if (choice == 'N' || choice == 'n'){
            break;
        }
    }
    return 0;
}
