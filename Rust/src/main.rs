/*
Dividend Finder
Created by Matthew Thornton on April 16 2022

This will take a number and print all possible 
factors. My standard test for a new language.

Note: using unsigned 32bit integers the max
workable number is 4294867295

*/

fn digit_checker(s: &String) -> bool {
    // return true if s contains only numbers
    return s.chars().all(char::is_numeric);
}

fn get_input() -> String {
    let mut line = String::new();
    println!("Enter a number: ");
    std::io::stdin().read_line(&mut line).unwrap();
    println!();
    if let Some('\n')=line.chars().next_back() {line.pop();}
    if let Some('\r')=line.chars().next_back() {line.pop();}
    return line;
}

fn dividend_finder(dividend: u32) {
    // declare variables
    let mut divisor: u32 = 1;
    let mut multi: u32 = 1;

    while dividend != divisor {
        // check divisor and multi; if values
        // are the same break to prevent reprinting
        if divisor != 1 && multi != 1 && divisor == multi {
            break;
        }
        if dividend%divisor == 0 {
            multi = dividend/divisor;
            println!("{} x {} = {}",divisor, multi, dividend)
        }
        divisor += 1;
    }
}

fn main() {
    let mut number: u32 = 0;
    let input = get_input();
    if digit_checker(&input) {
        number = input.parse().unwrap();
    }
    if number != 0 {
        dividend_finder(number);
    }
    else {
        println!("0 x 0 = 0");
    }
}
