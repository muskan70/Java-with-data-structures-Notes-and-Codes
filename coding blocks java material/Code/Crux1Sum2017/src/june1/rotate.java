package june1;

import java.util.Scanner;

public class rotate {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter number ");
		int num = scn.nextInt();

		System.out.println("Enter rotations ");
		int r = scn.nextInt();

		int temp = num;
		int d = 0;
		while (temp != 0) {
			d++;
			temp = temp / 10;
		}

		r = r % d;
		if (r < 0) {
			r = r + d;
		}

		int divider = (int) Math.pow(10, r);
		int multiplier = (int) Math.pow(10, d - r);
		
		int quo = num / divider;
		int rem = num % divider;
		
		int ans = rem * multiplier + quo;
		System.out.println(ans);
	}

}
