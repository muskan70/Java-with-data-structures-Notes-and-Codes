package june3;

import java.util.Scanner;

public class HR {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("Enter number of rows ");
		int n = scn.nextInt();

		int row = 1;
		int nst = n / 2, cst = 1;
		int nsp = 1, csp = 1;
		while (row <= n) {
			// stars
			cst = 1;
			while (cst <= nst) {
				System.out.print("*");
				cst++;
			}

			// spaces
			csp = 1;
			while (csp <= nsp) {
				System.out.print(" ");
				csp++;
			}

			// stars
			cst = 1;
			while (cst <= nst) {
				System.out.print("*");
				cst++;
			}

			if (row <= n / 2) {
				nst--;
				nsp += 2;
			} else {
				nst++;
				nsp -= 2;
			}

			System.out.println();
			row++;
		}
	}

}
