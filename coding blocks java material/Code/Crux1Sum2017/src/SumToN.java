import java.util.Scanner;

public class SumToN {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int n = scn.nextInt();
		
		int counter = 1;
		int sum = 0;
		
		while(counter <= n){
			sum = sum + counter;
			counter = counter + 1;
		}
		
		System.out.println("Sum from 0 to " + n + " is " + sum);
	}

}
