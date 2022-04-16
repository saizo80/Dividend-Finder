//
//  Dividend Finder
//  CPP_Test
//
//  Created by Matthew Thornton on 6/6/19.
//  Copyright © 2019 Matthew Thornton. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

bool digit_checker(string s){
    for (int i = 0; i < s.length(); i++){
        if (isdigit(s[i]) == false){
            return false;
        }
    }
    return true;
}

int dividend_finder(){
    int dividend;
    int divisor = 1;
    int multiplyer = 1;
    string stop_test;
    cout << "Enter a number or enter 'e' to return. ";
    cin >> stop_test;
    bool test_stop = digit_checker(stop_test);
    
    if (test_stop == false && stop_test != "e"){
        cout << "Invalid Input.\n";
        return 0;
    }
    else if (test_stop == false && stop_test == "e"){
        return 0;
    }
    else{
        dividend = stoi(stop_test);
    }
    
    while (dividend != divisor){
        if (dividend%divisor == 0){
            multiplyer = dividend/divisor;
            cout << divisor << " x " << multiplyer << " = "
            << dividend << "\n";
            if (divisor == multiplyer){
                break;
            }
            
        }
        divisor++;
        if (divisor == multiplyer){
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
