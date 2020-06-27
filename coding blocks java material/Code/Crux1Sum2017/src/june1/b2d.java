package june1;

import java.util.Scanner;

public class b2d {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter binary ");
		int bin = scn.nextInt();

		int dec = 0;
		int twkp = 1;

		while (bin != 0) {
			int rem = bin % 10;
			bin = bin / 10;
			
			dec = dec + rem * twkp;
			twkp = twkp * 2;
		}
		
		System.out.println(dec);
	}

}
