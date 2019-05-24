def main():
    divisor = int(1)
    dividend = int(input("Please enter a number. "))
    while divisor <= dividend:
        if (dividend%divisor == 0):
            multiplyer = (dividend//divisor)
            multiplyer = (multiplyer)
            print (divisor,'x',multiplyer,'=',dividend)
            #Line 8 was a bitch to figure out#
        divisor = divisor + 1

while True:
    main()
    if input("Repeat? y/n ") != 'y':
        break

#Coded by Matthew Thornton because he was#
#too depressed and needed an outlet of creativity#