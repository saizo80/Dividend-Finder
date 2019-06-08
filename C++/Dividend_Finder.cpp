//
//  main.cpp
//  CPP_Test
//
//  Created by Matthew Thornton on 6/6/19.
//  Copyright © 2019 Matthew Thornton. All rights reserved.
//

#include <iostream>
using namespace std;

int dividend_finder(){
    int dividend;
    int divisor = 1;
    int multiplyer = 1;
    cout << "Enter a number. ";
    cin >> dividend;
    while (dividend != divisor){
        if (dividend%divisor == 0){
            multiplyer = dividend/divisor;
            cout << divisor << " x " << multiplyer << " = " << dividend << "\n";
        }
        divisor++;
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
