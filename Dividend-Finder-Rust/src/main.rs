//
// Dividend Finder
// Created by Olympia Thornton on April 16 2022
//
//

fn digit_checker(s: &String) -> bool {
    return s.chars().all(char::is_numeric);
}

fn get_input() -> String {
    let mut line = String::new();
    println!("Enter a number: ");
    std::io::stdin().read_line(&mut line).unwrap();
    println!();
    if let Some('\n')=line.chars().next_back() {line.pop();}
    //if let Some('\r')=line.chars().next_back() {line.pop();}
    return line;
}

fn dividend_finder(dividend: i32) {
    let mut divisor: i32 = 1;
    let mut multi: i32 = 1;

    while dividend != divisor {
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
    let mut number: i32 = 0;
    let input = get_input();
    if digit_checker(&input) {
        number = input.parse().unwrap();
    }
    if number != 0 {
        dividend_finder(number);
    }
}
