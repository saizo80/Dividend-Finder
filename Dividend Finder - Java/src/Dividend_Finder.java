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
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the Dividend: ");
		int dividend = input.nextInt();
		while (divisor <= dividend){
			if (dividend%divisor == 0){
				int multiplyer = dividend/divisor;
				System.out.println(divisor + " x " + multiplyer + " = " + dividend);
			}
			divisor++;
		}				
	}
}
