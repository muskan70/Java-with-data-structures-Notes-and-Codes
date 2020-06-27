package june3;

import java.util.Scanner;

public class Inverse {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("Enter number of rows ");
		int n = scn.nextInt();

		int inv = 0;
		int place = 1;
		
		while (n != 0) {
			int rem = n % 10;
			n = n / 10;
			
			inv = inv + place * (int)Math.pow(10, rem - 1);
			
			place++;
		}
		
		System.out.println(inv);
	}

}
