package june1;

import java.util.Scanner;

public class inverse {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter number ");
		int num = scn.nextInt();

		int inv= 0;
		int place = 1;
		
		while(num != 0){
			int rem = num % 10;
			int newplace = (int)Math.pow(10, rem - 1);
			
			inv = inv + place * newplace;
			
			num = num/ 10;
			place++;
		}
		
		System.out.println(inv);
	}

}
