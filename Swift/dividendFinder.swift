/*
Dividend Finder
Written by Matthew Thornton on May 11 2022

This will take a number and print all possible 
factors. My standard test for a new language.

*/
func dividendFinder(_ dividend: Int) {
    var divisor = 1
    var multi = 1

    while dividend != divisor {
        if divisor != 1 && multi != 1 && divisor == multi {
            break;
        }
        if dividend%divisor == 0 {
            multi = dividend/divisor
            print("\(divisor) x \(multi) = \(dividend)")
        }
        divisor += 1
    }
}

func main() {
    print ("Enter number: ", terminator:"")
    if let input = readLine() {
        if let i = Int(input) {
            if i != 0 {
                dividendFinder(i)
            } else {
                print("0 x 0 = 0")
            }
        } else {
            print ("Input not number")
        }
    } else {
        print ("Error reading input")
    }
}

main()