def finder():
    divisor = int(1)
    dividend = int(input("Please enter a number. "))
    while divisor <= dividend:
        if dividend % divisor == 0:
            multiplyer = dividend/divisor
            print (divisor,'x', multiplyer,'=',dividend)
        divisor = divisor + 1

while True:
    finder()
    print ("Would you like to run again? Y/N: ")
    choice = input()
    if 'y' not in choice.lower():
        break
