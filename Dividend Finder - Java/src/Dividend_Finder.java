import java.util.Scanner;
public class Dividend_Finder {
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		while (true){
			finder();
			System.out.print("Would you like to run again? Y/N: ");
			char choice = input.next().charAt(0);
			if (choice == 'N' || choice == 'n') {
				input.close();
				break;
			}
		}
	}
	public static void finder() {
		int divisor = 1;
		int multiplyer;
		int multiplyer_l = 1;
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the Dividend: ");
		if (input.hasNextInt()) {
			int dividend = input.nextInt();
			while (divisor <= dividend){

				multiplyer = dividend/divisor;


				if (dividend%divisor == 0){
					
					if (divisor == multiplyer_l && multiplyer_l != 1) {
						break;
					}
					multiplyer_l = multiplyer;
					System.out.println(divisor + " x " + multiplyer + " = " + dividend);
				}
				if (divisor == multiplyer) {
					break;
				}
				divisor++;
			}		
		}
		else {
			System.out.println("That was not a number.\n");
			
			return;
		}
		
		
	}
}
