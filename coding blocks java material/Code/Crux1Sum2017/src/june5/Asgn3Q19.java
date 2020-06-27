package june5;

import java.util.Scanner;

public class Asgn3Q19 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
		System.out.println("ENter the number of numbers");
		int n = scn.nextInt();
		
		System.out.println("Enter the first number ");
		int prev = scn.nextInt();
		
		boolean gd = true;
		int counter = 2;
		while(counter <= n){
			System.out.println("Enter number ("  + counter + ")");
			int curr = scn.nextInt();
			
			// work region
			if(gd){
				if(curr < prev){
					// expected
				} else {
					gd = false;
				}
			} else {
				if(curr > prev){
					// expected
				} else {
					System.out.println("Invalid");
					return;
				}
			}
			
			// work region
			
			prev = curr;
			counter++;
		}
		
		System.out.println("Valid");
	}

}
